#include <bits/stdc++.h>
using namespace std;

struct union_find {
    vector<int> parent;
    union_find(int n) {
        parent = vector<int>(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        } else {
            parent[x] = find(parent[x]);
            return parent[x];
        }
    }

    void unite(int x, int y) {
        parent[find(x)] = find(y);
    }
};

int main() {
    int n; // number of house
    int m; // network already deployed
    cin >> n >> m;

    union_find houses(n);

    for (int i = 0; i < m; i++) {
        int house1, house2;
        cin >> house1 >> house2;
        houses.unite(house1-1, house2-1);
    }

    bool connected = true;
    for (int j = 1; j < n; j++) {
//        DEBUG
//        cout << "1 & " << j + 1 << " status : " << (houses.find(0) != houses.find(j)) << endl;
        if(houses.find(0) != houses.find(j)){
            cout << j + 1 << endl;
            connected = false;
        }
    }

    if (connected)
        cout << "Connected" << endl;
    return 0;
}

// [Union Find Disjoint Sets]
// * index vector as element,
// * value vector as return a representative
//
// union_find(6)
// -> vector<int> = { 0,1,2,3,4,5,6 }
//
// .find(3)
// -> 3
//
// .unite(1,3)
// -> vector[1] = 3
// -> vector = [0,3,2,3,4,5,6]
//
// .find(1)
// -> 3