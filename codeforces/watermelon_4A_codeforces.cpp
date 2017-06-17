#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

int main() {
    int weight_melon;
    cin >> weight_melon;
    string output = weight_melon % 2 == 0 && weight_melon != 2 ? "YES" : "NO";
    cout << output << endl;
}