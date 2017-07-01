#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string gen;
    cin >> n;
    cin >> gen;

    if (n % 4 != 0){
        cout << "===" << endl;
    } else {
        int a,c,g,t; a = 0; c = 0; g = 0; t = 0;
        for (int i = 0; i < gen.length(); i++) {
            switch (gen[i]){
                case 'A': a++; break;
                case 'C': c++; break;
                case 'G': g++; break;
                case 'T': t++; break;
                default:break;
            }
        }

        if (a > n/4 || c > n/4 || g > n/4 || t > n/4){
            cout << "===" << endl;
        } else {
            for (int j = 0; j < gen.length(); j++) {
                if (gen[j] == '?'){
                    if (a < n/4){
                        gen[j] = 'A'; a++;
                    } else if (c < n/4) {
                        gen[j] = 'C'; c++;
                    } else if (g < n/4){
                        gen[j] = 'G'; g++;
                    } else if (t < n/4) {
                        gen[j] = 'T'; t++;
                    }
                }
            }
            cout << gen << endl;
        }

    }
}
