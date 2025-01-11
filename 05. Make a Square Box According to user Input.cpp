#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    if (T < 1 || T > 25) {
        cout << "Error: T must be between 1 and 25." << endl;
        return 1;
    }

    while (T--) {
        int N;
        cin >> N;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << "*";
            }
            cout << endl;
        }

        if (T != 0) {
            cout << endl;
        }
    }

    return 0;
}
