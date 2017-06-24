#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, P;
    cin >> W >> P;
    vector<int> partition;

    partition.push_back(0);
    for (int i = 0; i < P; i++) {
        int L;
        cin >> L;
        partition.push_back(L);
    }
    partition.push_back(W);

    set<int> space;
    // logic here
    for (int j = 0; j < partition.size(); j++) {
        for (int i = 0; i < partition.size() ; ++i) {
            space.insert(abs(partition[j] - partition[i]));
        }
    }

    for (auto x: space){
        if (x != 0) {
            cout << x << " ";
        } else if (x == W) {
            cout << x << endl;
        }
    }
}
