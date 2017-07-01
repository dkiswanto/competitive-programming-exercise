#include <bits/stdc++.h>
using namespace std;

struct Participant {
    //
    string id;
    int one, two, three;

    // constructor
    // note param and class variable can't be same
    Participant(string s, int x,
                int y, int z){
        id = s; one = x; two = y, three = z;
    }

    bool operator<(const Participant &p) const {
        if (three != p.three){
            return three > p.three;
        } else if (two != p.two){
            return two > p.two;
        } else if (one != p.one){
            return one > p.one;
        }
    }

};


int main() {
    int cases; cin >> cases;
    while(cases--){
        int n, m; // n == peserta, m == yang lolos
        cin >> n >> m;
        string lolos; cin >> lolos;
        vector<Participant> participants;

        for (int i = 0; i < n; i++) {
            string id;
            int x,y,z;
            cin >> id >> x >> y >> z;
            Participant ptp(id,x,y,z);
            participants.push_back(ptp);
        }

        // sort participants
        sort(participants.begin(), participants.end());
        bool found = false;
        for (long j = 0; j < m ; j++) {

//            Participant p = participants[j];
//            printf("%s %d %d %d\n", p.id.c_str(), p.one, p.two, p.three);

            if (participants[j].id == lolos){
                found = true;
                break;
            }
        }

        if(found){
            cout << "YA" << endl;
        } else {
            cout << "TIDAK" << endl;
        }

    }

    return 0;
}
