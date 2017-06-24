#include <bits/stdc++.h>
using namespace std;

vector<string> split(string word, string delimiter){
    vector<string> tokens;
    size_t pos = 0;
    string token;
    while ((pos = word.find(delimiter)) != string::npos) {
        token = word.substr(0, pos);
        tokens.push_back(token);
        word.erase(0, pos + delimiter.length());
    }
    tokens.push_back(word);
    return tokens;
}

int main() {
    string s = "dede kiswanto ganteng";
    string delimiter = " ";

    vector<string> token = split(s, delimiter);
    for(auto word: token)
        cout << word << endl;

    return 0;
}
