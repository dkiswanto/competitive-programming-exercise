#include <bits/stdc++.h>
using namespace std;

int main(){
    long a,b;
    while(cin >> a >> b, a || b){

        // tracking number
        map<long, long> nums;

        // for output
        long init_a = a; long init_b = b;

        // manipulate a
        int step_a = 0;
        nums[a] = step_a;
        while (a != 1){
            if (a % 2 == 0) a = a / 2;
            else a = (3 * a) + 1;
            nums[a] = ++step_a;
        }

        int step_b = 0;
        while (!nums.count(b)){
            if (b % 2 == 0) b = b / 2;
            else b = (3 * b) + 1;
            step_b++;
        }

        // todo fix this, search for printing long type data
        printf("%d needs %d steps, %d needs %d steps, they meet at %d\n",
               init_a, nums[b], init_b, step_b, b);
    }

    return 0;
}