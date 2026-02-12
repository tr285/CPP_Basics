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
        for (int i = 0; i < N; i++) {
            int current_max = A[i];

            for (int j = i; j < N; j++) {
                if (A[j] > current_max) {
                    current_max = A[j];
                }

                cout << current_max << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
