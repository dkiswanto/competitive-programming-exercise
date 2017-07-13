#include <bits/stdc++.h>
using namespace std;

string encrypt(string sub_string, vector<int> keys){
    // generate string space with keys.size() size
    string enc (keys.size(), ' ');
    for (int i = 0; i < sub_string.length(); i++) {
        vector<int>::iterator it = find(keys.begin(), keys.end(), i);
        long nPosition = distance(keys.begin (), it);
        enc[nPosition] = sub_string[i];
    }
    return enc;
}

int main() {
    int n;
    cin >> n;
    while(n != 0){
        vector<int> keys;
        for (int i = 0; i < n; i++) {
            int key;
            cin >> key;
            keys.push_back(key - 1);
        }
        cin.ignore();
        string word;
        getline(cin, word);

        // output
        int i = 0;
        cout << "'";
        while (n * i < word.length()) {
            string sub = word.substr(n * i, n);
            cout << encrypt(sub, keys);
            i++;
        }
        cout << "'" << endl;

        cin >> n;
    }
}
