#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases; cin >> cases;
    for(int i=1; i <= cases; i++){
        int n; cin >> n;
        int max_speed = 0;
        for (int j = 0; j < n; j++) {
            int c; cin >> c;
            max_speed = max(c, max_speed);
        }
        printf("Case %d: %d\n", i, max_speed);
    }
    return 0;
}