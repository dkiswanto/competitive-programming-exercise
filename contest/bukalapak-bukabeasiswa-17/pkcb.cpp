#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> votes;
    cin >> n;
    int max = -1;

    for (int i = 0; i < n; i++) {
        int vote;
        cin >> vote;
        votes.push_back(vote);
        if(vote > max){
            max = vote;
        }
    }

    // hitung nilai 50%
    int sum = accumulate(votes.begin(), votes.end(), 0);

    // bandingkan jika max >= 50%
    double half = sum * 0.5;
    half = ceil(half);

    // total / peserta
    if(max > half){
        cout << max << endl;
    } else {
        cout << "Vote invalid, return to Earth!" << endl;
    }

    return 0;
}
