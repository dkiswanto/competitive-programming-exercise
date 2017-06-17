#include <iostream>
#include <vector>

using namespace std;

int main() {

    // kinto_d2	490A - Team Olympiad	GNU C++11	Accepted	15 ms	2100 KB
    // http://codeforces.com/problemset/problem/490/A

    int num_children;
    cin >> num_children;

    // input
    vector<int> programmer, math, physical;
    for (int i = 1; i <= num_children; i++) {
        int t;
        cin >> t;
        if (t == 1){
            programmer.push_back(i);
        } else if (t == 2){
            math.push_back(i);
        } else if (t == 3){
            physical.push_back(i);
        }
    }

    // process
    long total_team = min(programmer.size(), min(math.size(), physical.size()));
    if (total_team == 0){
        cout << 0 << endl;

    } else {
        cout << total_team << endl;
        for (int j = 0; j < total_team ; j++) {
            cout << programmer[j] << " ";
            cout << math[j] << " ";
            cout << physical[j] << endl;
        }
    }

    return 0;
}