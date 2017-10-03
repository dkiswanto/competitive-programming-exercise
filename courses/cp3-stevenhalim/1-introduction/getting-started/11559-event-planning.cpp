#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; //participant
    int B; //budget
    int H; //hotel consider
    int W; //number of weeks
    while(cin >> N >> B >> H >> W){
        int cheapest = -1;

        // for each hotel
        for (int i = 0; i < H; i++) {

            // get hotel price
            int price; cin >> price;

            // for each week
            for (int j = 0; j < W; j++) {

                // total bed in hotel
                int bed; cin >> bed;

                // bed must enough of participant
                if (bed >= N){

                    // must enough budget
                    if ((N * price) <= B){
                        if (cheapest == -1) {
                            cheapest = N * price;
                        } else {
                            cheapest = min(cheapest, (N * price));
                        }
                    }
                }
            }
        }
        if (cheapest == -1){
            cout << "stay home" << endl;
        } else {
            cout << cheapest << endl;
        }
    }
    return 0;
}