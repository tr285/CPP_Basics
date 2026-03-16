#include <iostream>
using namespace std;

int main() {
    int n, m;

    for (;;) {
        cin >> n >> m;

        if (n <= 0 || m <= 0)
            break;

        int sum = 0;

        if (n > m) {
            int temp = n;
            n = m;
            m = temp;
        }

        for (int i = n; i <= m; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}