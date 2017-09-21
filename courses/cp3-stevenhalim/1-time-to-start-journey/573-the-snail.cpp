#include <bits/stdc++.h>
using namespace std;

int main() {
    double H, U, D, F;
    // Height of well,
    // U distance snail can climb,
    // Fatigue (percent),
    // D slides down at night

    while(cin >> H >> U >> D >> F, H != 0){
        double loss = U * (F / 100);
        int day = 0;
        double init_height = 0;
        bool status = true;
        while (init_height < H){
            day++;
//            cout << "day: " << day << " init_h: " << init_height << " climb: " << U << " heigh_climb: " << init_height + U << " heigh_slide: " << init_height + U - D << endl;
            init_height += U;

            // note this is the tricky case,
            // snail can't climb with negative height
            if (U - loss < 0){
                U = 0;
            } else {
                U = U - loss;
            }

            if (init_height > H){
                break;
            }
            init_height -= D;
            if (init_height < 0){
                status = false;
                break;
            }
        }

        if (status){
            cout << "success on day " << day << endl;
        } else {
            cout << "failure on day " << day << endl;

        }

    }
    return 0;
}