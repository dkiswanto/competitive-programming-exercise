#include <bits/stdc++.h>
using namespace std;

int main() {

    int cases; cin >> cases;
    int num = 1;
    while(cases--){
        int a, b, k;
        cin >> a;
        cin >> b;
        cin >> k;
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (i % k == 0) count++;
        }
        cout << "Case " << num++ << ": " << count << endl;
    }

    return 0;
}