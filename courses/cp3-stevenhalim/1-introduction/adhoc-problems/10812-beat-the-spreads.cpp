#include <bits/stdc++.h>

using namespace std;

int main() {

    int cases;
    cin >> cases;
    while (cases--){

        // input
        int sum_scores, diff_abs;
        cin >> sum_scores >> diff_abs;

        int x,y;
        y = abs( sum_scores - diff_abs) / 2;
        x = sum_scores - y;

        if ((x + y == sum_scores) && (abs(x-y) == diff_abs))
            cout <<  max(x,y) << " " << min(x,y) << endl;
        else
            cout << "impossible" << endl;

    }
    return 0;
}