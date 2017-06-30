#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;

    // Generate Subset
//    int subset[n]; // element holder
//    for (int i = 0; i < n; i++) subset[i] = i; // initialize element

//    for (int i = 0; i < (1 << n); i++) {
//        for (int j = 0; j < n; j++) {
//            if (i & (1 << j)){
//                cout << subset[j] << " ";
//            }
//        }
//        cout << endl;
//    }


    // generate permuation
    vector<int> permutation = {0,9,0,0,1};
//    for (int i = 0; i < n; i++) {
//        permutation.push_back(i);
//    }
    do {
        for (int i = 0; i < permutation.size(); i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    } while (next_permutation(permutation.begin(),permutation.end()));

    return 0;
}
