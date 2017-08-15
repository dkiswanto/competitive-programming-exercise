#include <bits/stdc++.h>
using namespace std;

int main() {

    int cases;
    cin >> cases;
    while (cases--){
        int N, K; // N = karyawan, K = dipindahkan
        cin >> N >> K;
        vector<int> gajih;
        for (int i = 0; i < N; i++) {
            int gaji;
            cin >> gaji;
            gajih.push_back(gaji);
        }

        // sort gaji
        sort(gajih.rbegin(), gajih.rend());

        // cari minimum
        int minim = gajih.front() - gajih[N-K-1];
        for (int i = 0; i < K; i++) {
//            cout << minim <<<<  endl;
//            printf("%d %d %d\n", minim, gajih[i], gajih[N-K+i-1]);
            minim = min(minim, gajih[i] - gajih[N-K+i-1]);
        }

        cout << minim << endl;

    }

    return 0;
}
