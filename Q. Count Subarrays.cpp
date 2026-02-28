#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[105];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long count = 0;
        long long len = 1; // current non-decreasing length

        count = 1; // first element always valid

        for (int i = 1; i < N; i++) {
            if (A[i] >= A[i-1]) {
                len++;
            } else {
                len = 1;
            }
            count += len;
        }

        cout << count << endl;
    }

    return 0;
}