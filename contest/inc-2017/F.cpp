#include <bits/stdc++.h>
using namespace std;


int minimum(int *a, int min_diff, int max_diff, int n, int k) {
    int diff = ceil((min_diff + max_diff)/2.0);
    int prev = 0;
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(a[i]-a[prev] >= diff) {
            count++;
            prev = i;
            if(count == k)
                break;
        }
    }

    if(max_diff == min_diff)
        return diff;
    else if(count < k)
        return minimum(a, min_diff, diff - 1, n, k);
    else
        return minimum(a, diff, max_diff, n, k);
}

int main() {
    int N, K;
    cin >> N >> K;
    set<int> numbers;
    int real[N];
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        numbers.insert(num);
        real[i] = num;
    }

    if (numbers.size() < K){
        cout << 0 << endl;
    } else {
        sort(real, real+N);
        int min_diff = 0;
        int max_diff = real[N-1] - real[0];
        cout << minimum(real, min_diff, max_diff, N, K) << endl;
    }

    return 0;
}