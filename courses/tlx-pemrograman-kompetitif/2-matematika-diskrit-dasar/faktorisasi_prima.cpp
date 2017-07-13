#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n < 2){
        cout << n << endl;
        return 0;
    }

    map<int, int> factor; // key = number factor, val = total factor

    int idx = 1;
    while (n != 1) { // it can still be optimized, but in this problem it has already accepted.
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
//                cout << "i: " << i << endl;
                n = n / i;
                if(factor.count(i)){
                    factor[i] += 1;
                } else {
                    factor[i] = 1;
                }
                break;
            }
        }
    }

    // output
    int total = factor.size();
    int i = 1;
    for(auto num: factor){
        if (num.second == 1){
            cout << num.first;
        } else {
            cout << num.first << "^" << num.second;
        }

        if (i != total){
            cout << " x ";
        }
        i++;
    }
    cout << endl;

    return 0;
}
