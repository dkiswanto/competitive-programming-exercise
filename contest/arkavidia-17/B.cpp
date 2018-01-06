#include<bits/stdc++.h>
using namespace std;

long rem_XOR(long n) {
    switch (n % 4) {
        case 0: return n;
        case 1: return 1;
        case 2: return n + 1;
        case 3: return 0;
        default: break;
    }
}

int main() {
    int cases; cin >> cases;
    while (cases--) {
        long long L, R;
        cin >> L >> R;
        cout << (rem_XOR(R) ^ rem_XOR(L - 1)) << endl;
    }
    return 0;
}
