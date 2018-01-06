#include <bits/stdc++.h>
using namespace std;

int main() {

    int cases;
    cin >> cases;
    while (cases--){
        int n; cin >> n;
        vector<int> kue;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            kue.push_back(a);
        }

        // get minimum
        sort(kue.begin(), kue.end());

        int minimum = kue[0];

        int sisa = 0;
        for (int j = 0; j < n; j++) {
            sisa += kue[j] - minimum;
        }
        
        cout << sisa << endl;
    }

    return 0;
}