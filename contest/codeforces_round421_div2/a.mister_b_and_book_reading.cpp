#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; // pages
    int v0; // starting read pages
    int a; // couter speed pages;
    int v1; // max pages able to read
    int l; // re-read pages

    // input : c, v0, v1, a and l
    cin >> c >> v0 >> v1 >> a >> l;

    int days = 0;
    int i = 0;
    while (c > 0){

        if (days > 0){
            c += l;
        }

        int read;
        if (v0 * i < v1){
            read = v0 + (i * a);
            i++;
        } else {
            read = v1;
        }

        c = c - read;

        days++;
    }

    cout << days << endl;
    return 0;

}