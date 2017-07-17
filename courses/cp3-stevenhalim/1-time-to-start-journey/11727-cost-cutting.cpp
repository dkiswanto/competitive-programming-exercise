#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases; cin >> cases;
    for (int i = 1; i <= cases; i++){
        vector<int> salary;
        for (int j = 0; j < 3; j++) {
            int cost;
            cin >> cost;
            salary.push_back(cost);
        }
        sort(salary.begin(), salary.end());
        printf("Case %d: %d\n", i, salary[1]);
    }
    return 0;
}