#include <iostream>
using namespace std;

int main() {
    int T, N;

    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> N;
        cout << "Case " << i << ": ";
        
        for (int j = 1; j <= N; j++) {
            if (N % j == 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
