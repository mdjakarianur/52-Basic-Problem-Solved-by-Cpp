#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int T;
    char n[101];
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> n;
        char lastDigit = n[strlen(n) - 1];
        if ((lastDigit - '0') % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }
    return 0;
}
