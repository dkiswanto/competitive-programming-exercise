#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        string word;
        cin >> word;
        if(word.size() > 10){
            cout << word.front() << word.size() - 2 << word.back() << endl;
        } else {
            cout << word << endl;
        }
    }
}