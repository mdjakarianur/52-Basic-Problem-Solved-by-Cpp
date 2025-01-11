#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T, r1, r2, B, ball_played;
    double current_rr, asking_rr;

    cin >> T;

    while (T--) {
        cin >> r1 >> r2 >> B;
        ball_played = 300 - B;

        current_rr = (double)r2 / ball_played * 6;

        asking_rr = (double)(r1 - r2 + 1) / B * 6;

        cout << fixed << setprecision(2) << current_rr << " " << asking_rr << endl;
    }

    return 0;
}
