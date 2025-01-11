#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i <= T; i++) {
        int N;
        cin >> N;

        int root = sqrt(N);
        if (root * root == N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
