#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {

        bool found = false;
        int ordo = -1;
        string number;
        cin >> number;

        for (int j = 1; j <= 10; j++) {

            long long total = 0;
            for (int k = 0; k < number.size(); k++) {

                // parsing char to int (minus - 48)
                long long num = number[k] - 48;
                total += pow(num, j);
            }
            string predict = to_string(total);
            if (number == predict){
                found = true;
                ordo = j;
                break;
            }

        }

        if (found){
            cout << ordo << endl;
        } else {
            cout << "TIDAK" << endl;
        }
    }


    return 0;
}
