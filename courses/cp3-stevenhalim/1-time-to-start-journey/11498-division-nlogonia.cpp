#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    while(cin >> cases, cases != 0){
        int a, b;
        cin >> a >> b;

        while(cases--){
            int x,y;
            cin >> x >> y;
            if (x == a || y == b) {
                cout << "divisa" << endl;
            } else if (x < a && y > b) {
                cout << "NO" << endl;
            } else if (x > a && y > b) {
                cout << "NE" << endl;
            } else if (x < a && y < b) {
                cout << "SO" << endl;
            } else if (x > a && y < b){
                cout << "SE" << endl;
            }
        }
    }
    return 0;
}