#include <bits/stdc++.h>

using namespace std;


int main() {
    string word, remover;
    cin >> word >> remover;
    while( word.find(remover) != string::npos){

        // find and remove string
        auto x = word.find(remover);
        word.erase(x, remover.size());
    }
    cout << word << endl;
    return 0;
}