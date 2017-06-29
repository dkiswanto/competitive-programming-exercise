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

//    union_find houses(n);
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

// UNION FIND CP3 VERSION
class UnionFind {
private: vector<int> p, rank;
public:
    // constructor
    UnionFind(int N){
        rank.assign(N,0);
        p.assign(N,0);
        for (int i = 0; i < N; i++) {
            p[i] = i;
        }
    }

    int find_set(int i){
        return (p[i] == i) ? i : (p[i] = find_set(p[i]));
    }

    int is_same_set(int i, int j){
        return find_set(i) == find_set(j);
    }

    void union_set(int i, int j){
        if (!is_same_set(i, j)){
            int x = find_set(i); int y = find_set(j);
            if (rank[x] > rank[y]) {  // still don't know rank vector function
                p[y] = x;             // must read the explanation in the book
            } else {
                p[x] = y;
                if (rank[x] == rank[y]) rank[y]++;
            }
        }
    }

};