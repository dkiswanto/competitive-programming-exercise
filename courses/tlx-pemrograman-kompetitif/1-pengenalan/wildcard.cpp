#include <bits/stdc++.h>
using namespace std;

bool is_match(string wildcard, string word){
    if (wildcard == "*")
        return true;

    // word len must more than wildcard
    if (word.size() < wildcard.size()-1)
        return false;

    long size_wildcard = wildcard.size() - 1;
    if (wildcard.back() == '*'){
        return wildcard.substr(0, size_wildcard) == word.substr(0, size_wildcard);

    } else if (wildcard.front() == '*'){
        return wildcard.substr(1, size_wildcard) == word.substr(word.size()-size_wildcard);

    } else {
        // wildcard is in the middle condition
        // find index *
        int idx = wildcard.find('*');
        if (idx == string::npos){ // if index not found
            return wildcard == word;
        }
        // remove word after front & before back wildcard card;
        wildcard.erase(idx, 1);
        word.erase(idx,word.size() - wildcard.size());

        // assert it
        // cout << wildcard << " " << word << " - ";
        return wildcard == word;
    }
}

int main() {
    string wildcard;
    cin >> wildcard;
    int n; cin >> n;
    while(n--){
        string word;
        cin >> word;
        if(is_match(wildcard, word)){
            cout << word << endl;
        }
    }

//    cout << (is_match("dede*kiswanto", "dede ganteng kiswanto")) << endl;
//    cout << (is_match("d*o", "d")) << endl;
//    cout << (is_match("d*o", "do")) << endl;
//    cout << (is_match("d*", "do")) << endl;
//    cout << (is_match("*testest", "asd")) << endl;
//    cout << (is_match("dede*kiswanto*", "dedekiswanto")) << endl;
//    cout << (is_match("*asd", "asd")) << endl;

    return 0;
}
