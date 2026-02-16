#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long minSoFar = A[0] - 1;   // A[i] - i (1-based index)
        long long ans = LLONG_MAX;

        for (int j = 1; j < N; j++) {
            ans = min(ans, minSoFar + A[j] + (j + 1));
            minSoFar = min(minSoFar, A[j] - (j + 1));
        }

        cout << ans << "\n";
    }
    return 0;
}
