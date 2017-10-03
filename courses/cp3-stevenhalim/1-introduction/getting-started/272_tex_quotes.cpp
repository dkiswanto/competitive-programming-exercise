#include <bits/stdc++.h>
using namespace std;

int main() {
    bool is_open = true;
    string word;
    while(getline(cin, word)){
        for (int i = 0; i < word.size(); i++) {
            if(word[i] == '"'){
                string replace = is_open ? "``" : "''";
                word.replace(i,1, replace);
                is_open = !is_open;
            }
        }
        cout << word << endl;
    }
    return 0;
}