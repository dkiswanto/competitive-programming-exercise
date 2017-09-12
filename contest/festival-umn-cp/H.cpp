#include <bits/stdc++.h>
using namespace std;

int main() {

    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++){
        int P, I;
        double D;
//        - D : Nilai Deposit Sekarang
//        - P : Biaya yang dibutuhkan
//        - I : bunga per bulan
        cin >> D >> P >> I;

        int month = 0;
        while(D < P){
            D += D * (I/ 100.0);
//            cout << D << endl;
            month++;
//            cout << D << endl;
//            cout << float (I / 100) << endl;
        }
        cout << "Case #"<< i << ": " << month << endl;

    }

    return 0;
}