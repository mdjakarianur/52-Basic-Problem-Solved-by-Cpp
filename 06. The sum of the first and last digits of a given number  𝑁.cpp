#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int lastDigit = N % 10;

        int firstDigit = N;
        while (firstDigit >= 10) {
            firstDigit /= 10;
        }
        int sum = firstDigit + lastDigit;
        cout << "Sum = " << sum << endl;
    }

    return 0;
}
