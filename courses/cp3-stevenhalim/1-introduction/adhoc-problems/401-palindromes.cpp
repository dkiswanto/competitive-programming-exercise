#include <bits/stdc++.h>

using namespace std;


char reverse(char x){
    char rev;
    switch (x){
        case 'A': rev = 'A'; break;
        case 'E': rev = '3'; break;
        case 'H': rev = 'H'; break;
        case 'I': rev = 'I'; break;
        case 'J': rev = 'L'; break;
        case 'L': rev = 'J'; break;
        case 'M': rev = 'M'; break;
        case 'O': rev = 'O'; break;
        case 'S': rev = '2'; break;
        case 'T': rev = 'T'; break;
        case 'U': rev = 'U'; break;
        case 'V': rev = 'V'; break;
        case 'W': rev = 'W'; break;
        case 'X': rev = 'X'; break;
        case 'Y': rev = 'Y'; break;
        case 'Z': rev = '5'; break;
        case '1': rev = '1'; break;
        case '2': rev = 'S'; break;
        case '3': rev = 'E'; break;
        case '5': rev = 'Z'; break;
        case '8': rev = '8'; break;
        default: return ' ';
    }
    return rev;
}

int main() {
    string word;

    while (cin >> word){

        double word_size = word.size();
        bool palindrom = true;
        bool mirrored = true;
        for (int i = 0; i <= word_size / 2; i++) {
            if (word[i] != word[word_size-1-i]){
                palindrom = false;
            }
            if (reverse(word[i]) != word[word_size-1-i]){
                mirrored = false;
            }

        }

        cout << word;
        if (mirrored && palindrom){
            cout << " -- is a mirrored palindrome." << endl;

        } else if (palindrom) {
            cout << " -- is a regular palindrome." << endl;

        } else if (mirrored) {
            cout << " -- is a mirrored string." << endl;

        } else {
            cout << " -- is not a palindrome." << endl;
        }
        cout << endl;
    }
    return 0;
}