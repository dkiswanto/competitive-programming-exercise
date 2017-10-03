#include <bits/stdc++.h>
// must already know std lib + container first, not recommended for beginner.

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> groups;
    set<int> totals;

    int counter= 0;

    for (int i = 0; i < N; i++) {
        int friends;
        cin >> friends;
        counter += friends;
        groups.push_back(friends);
        totals.insert(counter);
    }


    int max = *max_element(groups.begin(), groups.end());
//    cout << "COUNTER " << counter << endl;

    for(auto total : totals){

        if(total < max){
            continue;
        }

        if(counter % total != 0){
            continue;
        }

        int temp = total;
        bool go = true;
        for (auto group: groups) {
            temp -= group;
            if (temp < 0){
                go = false;
                break;
            } else if (temp == 0){
                temp = total;
            }
        }

        if (temp != total){
            go = false;
        }

        if (go){
            cout << total << " ";
        }
    }
    cout << endl;

    return 0;
}
