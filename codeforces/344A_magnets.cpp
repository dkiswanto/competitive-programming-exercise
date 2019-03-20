#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int total = 0;
    cin >> n;
    int current;
    for (int i = 0; i < n; i++) {
        int magnet;
        cin >> magnet;
        if (i == 0){
            current = magnet;
        } else {
            if (current != magnet){
                total++;
            }
            current = magnet;
        }
    }

    cout << total + 1 << endl;

    return 0;
}
