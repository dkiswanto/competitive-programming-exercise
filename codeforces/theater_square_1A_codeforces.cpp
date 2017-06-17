#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

int main() {
    long long n, m ,a;
    cin >> n >> m >> a;
    // note : best practices using ceiling
    long long x = n % a == 0 ? n / a : (n / a) + 1;
    long long y = m % a == 0 ? m / a : (m / a) + 1;
    cout << x * y << endl;
}