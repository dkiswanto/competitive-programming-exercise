#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {

    int n;

    // input data to map
    map<int,int> data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        // if key is exist
        if (data.count(temp)){
            data[temp]++;
        } else {
            data[temp] = 1;
        }

    }

    // get max key in map
    auto max_key = max_element(data.begin(), data.end(), data.value_comp());
    cout << max_key->first << " : " << max_key->second << endl;

    // print all key and values
    for (auto x : data) {
        cout << x.first << " " << x.second << "\n";
    }

    // custom operation, use loop (using std::algorithm is difficult for beginner)
    int max_modus_key = 0;
    int max_modus_val = 0;
    for (auto x : data) {
        if( max_modus_key == 0 && max_modus_val == 0){
            max_modus_key = x.first;
            max_modus_val = x.second;
        } else {
            if (x.second >= max_modus_val && x.first > max_modus_key){
                max_modus_key = x.first;
                max_modus_val = x.second;
            }
        }
    }

    cout << max_modus_key << endl;

    // sort map by second element (vector)
    for (map<string,vector<int>>::iterator it = trips.begin(); it != trips.end(); ++it) {
        sort(it->second.begin(), it->second.end());
    }
}