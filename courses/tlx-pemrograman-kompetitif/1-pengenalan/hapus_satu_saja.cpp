#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    bool can_same = false;
    for (int i = 0; i < a.size(); i++) {
        string temp(a);
        temp.erase(i,1);
        if (temp == b){
            can_same = true;
            break;
        }
    }
    if (can_same){
        cout << "Tentu saja bisa!" << endl;
    } else {
        cout << "Wah, tidak bisa :(" << endl;
    }
    return 0;
}
