#include <bits/stdc++.h>
using namespace std;

bool all_true(bool arr[], int n){
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
//            cout << i << endl;
            return false;
        }
    }
    return true;
}

int main() {

//    bool arr[] = {1,1,1,1,1};
//    cout << all_true(arr, 5) << endl;

    int n;
    while (cin >> n){
        bool flags[n-1];
        memset(flags, false, sizeof(flags));

        int prev;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (i == 0){
                prev = temp;
            } else {
//                cout << abs(prev - temp) - 1 << endl;
                flags[abs(prev - temp) - 1] = true;
                prev = temp;
            }
        }

        if (all_true(flags, n-1)){
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }

    }

    return 0;
}