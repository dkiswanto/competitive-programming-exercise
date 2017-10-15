#include <bits/stdc++.h>
using namespace std;

int main() {

    int M, N;
    cin >> M >> N;

    int matrix[M][N];

//    cout << M << N << endl;

    // input
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int temp; cin >> temp;
            matrix[i][j] = temp;
        }
    }

    // matrix operation
    int cases; cin >> cases;
    while (cases--){
        string op;
        int k, val;
        cin >> op >> k >> val;

        if (op == "row"){
            for (int i = 0; i < N; i++) {
                matrix[k-1][i] += val;
            }

        // column
        } else {
            for (int i = 0; i < M; i++) {
                matrix[i][k-1] += val;
            }

        }
    }

    // operate sum min max
    int max = -100, min = 100, sum = 0;
    for (int l = 0; l < M; l++) {
        for (int i = 0; i < N; i++) {
            int temp = matrix[l][i];
            if (temp > max) max = temp;
            if (temp < min) min = temp;
            sum += temp;
        }
    }

//    cout << "Akhir Matrix" << endl;
//    for (int m = 0; m < M; m++) {
//        for (int i = 0; i < N; i++) {
//            cout << matrix[m][i] << " ";
//        }
//        cout << endl;
//    }

    cout << sum << " " << min << " "<< max << endl;

    return 0;
}