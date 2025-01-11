#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        int num, totalCount = 0;

        while (ss >> num) {
            totalCount++;
        }

        cout << totalCount << endl;
    }

    return 0;
}
