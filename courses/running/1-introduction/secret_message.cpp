#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        // get M number
        int M = (int) ceil(sqrt(word.size()));

        // create matrix M*M
        char matrix[M][M];
        memset(matrix, '*', sizeof(matrix));

        // insert to matrix
        int idx = 0; int idx2 = 0;
        for (int l = 0; l < word.size(); l++) {
            if (idx2 >= M){
                idx++; idx2 = 0;
            }
            matrix[idx][idx2++] = word[l];
        }

        // debug
//        for (int j = 0; j < M; j++) {
//            for (int k = 0; k < M; ++k) {
//                cout << matrix[j][k];
//            }
//            cout << endl;
//        }

        // output matrix (output rotated)
        for (int j = 0; j < M; j++) {
            for (int k = M-1; k >= 0; k--) {
                if(matrix[k][j] != '*')
                    cout << matrix[k][j];
            }
        }
        cout << endl;

    }

}
