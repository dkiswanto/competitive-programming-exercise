#include <bits/stdc++.h>
using namespace std;

int main() {

    int cases;
    cin >> cases;
    while (cases--){
        int N;
        cin >> N;
        string word;
        cin >> word;

        if (N <=1){
            cout << 0 << endl;
            continue;
        }

        map<char, int> coll;
        for (int i = 0; i < word.size(); i++) {
            char selected = word[i];
            // if key is exist
            if (coll.count(selected)){
                coll[selected]++;
            } else {
                coll[selected] = 1;
            }
        }
//        auto max_key = max_element(coll.begin(), coll.end(), coll.value_comp());
//        cout << max_key->first << " : " << max_key->second << endl;
        int current = 0;
        for(auto i : coll){
//            cout << i.first << " : " << i.second << endl;
            current = max(current, i.second);
        }
        cout << N - current << endl;
    }

    return 0;
}
