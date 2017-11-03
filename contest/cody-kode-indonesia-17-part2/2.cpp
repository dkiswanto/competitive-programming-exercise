#include <bits/stdc++.h>
using namespace std;

int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

#define N_MAX 105
#define M_MAX 105

bool lookup(char matrix[N_MAX][M_MAX], int N, int M, int row, int col, string word, int &count) {

    // check first char
    if (matrix[row][col] != word[0]) return false;

    double len = word.length();

    // get all direction
    for (int dir = 0; dir < 8; dir++) {

        int k, rd = row + x[dir], cd = col + y[dir];

        for (k = 1; k < len; k++) {
            if (rd >= N || rd < 0 || cd >= M || cd < 0)
                break;

            if (matrix[rd][cd] != word[k])
                break;

            rd += x[dir], cd += y[dir];
        }

        if (k == len){
            count++;
//            cout << row << " " << col << " - " << matrix[row][col] << endl;
        }
//            return true;
    }
    return false;
}

int main() {

    int cases; cin >> cases;
    int num = 1;
    while(cases--){
        int count = 0;
        int N, M;
        cin >> N;
        cin >> M;

        char matrix[N_MAX][M_MAX];

        for (int i = 0; i < N; i++) {
            cin >> matrix[i];
        }

        string word; cin >> word;

//        cout << "DEBUG" << endl;
//        for (int j = 0; j < N; j++) {
//            for (int i = 0; i < M; i++) {
//                cout << matrix[j][i];
//            }
//            cout << endl;
//        }

        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                lookup(matrix, N, M, i, j, word, count);
//                    cout << i << " " << j << " - " << matrix[i][j] << endl;
//                }

        cout << "Case " << num++ << ": " << count << endl;
    }

    return 0;
}