#include <bits/stdc++.h>
// must already know std lib + container first, not recommended for beginner.

using namespace std;

int main() {
    string word;
    cin >> word;

    string sub = "a";
    while( word.find(sub) != string::npos) {
        sub = sub + "a";
//        cout << sub << endl;
    }

    cout << sub << endl;

    return 0;
}
