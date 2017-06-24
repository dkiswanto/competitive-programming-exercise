#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

int main() {
    int n;

    // input for first case
    cin >> n;

    while (n != 0){

        // input new encrypted word
        string encrypted_word;
        cin >> encrypted_word;

        // process encrypted word
        long enc_length = encrypted_word.length();
        long m =  enc_length / n;
        char matrix[m][n];
        // cout << "matrix size " << m << "x" << n << " - row x column" << endl;

        bool reverse = false;
        int idx = 0;
        int x = 0; int y = 0; // index for matrix traversal
        while (idx < enc_length) {
            char char_selected = encrypted_word[idx]; idx++;

            if (y >= 0 && y < n) {
                matrix[x][y] = char_selected;
                // cout << x << "x" << y << "=" << char_selected << endl;
                // left right - right left increment
                reverse ? y-- : y++;
            } else {
                // change reverse boolean
                x++;
                reverse ? y++ : y--;
                reverse = !reverse;
                matrix[x][y] = char_selected;
                // cout <<"reversed - " << x << "x" << y << "=" << char_selected << endl;
                reverse ? y-- : y++;

            }
        }

        // output matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[j][i];
            }
        }
        cout << endl;
        
        // input for next case
        cin >> n;
    }
}