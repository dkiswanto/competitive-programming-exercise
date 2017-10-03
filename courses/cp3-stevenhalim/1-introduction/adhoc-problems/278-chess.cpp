#include <bits/stdc++.h>

using namespace std;

int main() {

    int cases;
    cin >> cases;
    while (cases--){

        char pieces;
        int m, n;
        cin >> pieces >> m >> n;
        if (pieces == 'r'){
            cout << min(m, n) << endl;

        // solutions at http://mathworld.wolfram.com/KnightsProblem.html
        } else if (pieces == 'k') {
            cout << ((m + 1)/2) * ((n + 1)/2) + (m/2) * (n/2) << endl;

        } else if (pieces == 'Q') {
            cout << min(m,n) << endl;

        } else if (pieces == 'K') {
            cout << ((m+1)/2) * ((n+1)/2) << endl;

        }
    }
    return 0;
}