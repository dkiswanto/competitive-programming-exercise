#include <bits/stdc++.h>
using namespace std;

/* DYNAMIC PROGRAMMING PSEUDO CODE
value dp(problem P) {

   // set base case
   if (is_base_case(P))
       return base_case_value(P);

   // if data exist in memory return
   if (memory.count(P))
       return memory[P];

   // calculate the result
   value result = some value;
   for (problem Q in subproblems(P))
       result = combine(result, dp(Q));

   // save to memory and return the result
   memory[P] = result;
   return result;
}
 */

map<int, long> memory;
int called = 0;

long fib(long n){

    if (memory.count(n))
        return memory[n];

    if (n <= 2)
        return 1;

    long res = fib(n-2) + fib(n-1);
    memory[n] = res;
    return res;
}

int best_sum(vector<int> arr, int i) {
    called++;
    if (i == 0) {
        return arr[i];
    }

    if (memory.count(i)){
        return memory[i];
    }

    int res = max(arr[i], arr[i] + best_sum(arr, i - 1));
    memory[i] = res;
    return res;
}



int main() {



}
