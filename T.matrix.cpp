#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[100][100];
    int primary = 0, secondary = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];

            if (i == j)
                primary += A[i][j];

            if (i + j == N - 1)
                secondary += A[i][j];
        }
    }

    cout << abs(primary - secondary);

    return 0;
}