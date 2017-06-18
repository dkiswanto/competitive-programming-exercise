#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n_participant, k, max;
    cin >> n_participant >> k;
    vector<int> scores;
    for (int i = 0; i < n_participant; i++) {
        int score;
        cin >> score;
        if (i == k - 1){
            max = score;
        };
        scores.push_back(score);
    }

    // sort scores decrement (high to low)
    int advancers = 0;
    for (int j = 0; j < scores.size(); j++) {
        if (scores[j] >= max && scores[j] != 0){
            advancers++;
        }
    }

//    cout << max << endl;
    cout << advancers << endl;

}