#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        int arr[3] = {n1, n2, n3};
        sort(arr, arr + 3);
        cout << "Case " << t << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }

    return 0;
}
