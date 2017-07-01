#include <bits/stdc++.h>
using namespace std;

bool all_true(int row[], int size){
    for (int i = 0; i < size; i++) {
        if (row[i] == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int R,C; cin >> R >> C;
    int board[R+10][C+10];

    // input board
    for (int i = 0; i < R; i++) {
        string row; cin >> row;
        for (int j = 0; j < row.size(); j++) {
            board[i][j] = row[j] == '0' ? 0 : 1;
        }
    }

    // check first
    bool filled = false;
    int last_true = 0;
    for (int k = 0; k < R; k++) {
        if (all_true(board[k], C)) {
            memset(board[k], 0, sizeof(board[k]));
            last_true = k;
            filled = true;
        }
    }

    while(filled){

//        cout << "WILL BE DOWN" << endl;
        for (int i = last_true - 1; i >= 0; i--) {
            for (int j = 0; j < C; j++) {
                if (board[i][j] == 1) {
                    int current_idx = i;
                    board[current_idx][j] = 0;
                    while (board[current_idx][j] != 1 && current_idx < R) {
                        current_idx++;
                    }
//                    cout << current_idx << " ";
                    board[current_idx - 1][j] = 1;
                }
            }
//            cout << endl;
        }

        // check all row
        filled = false;
        for (int k = 0; k < R; k++) {
            if (all_true(board[k], C)){
                memset(board[k], 0, sizeof(board[k]));
                last_true = k;
                filled = true;
            }
        }
    }

    // output
//    cout << "\nOUTPUT" << endl;
    for (int k = 0; k < R; k++) {
        for (int i = 0; i < C; i++)
            cout << board[k][i];
        cout << endl;
    }

    return 0;
}
