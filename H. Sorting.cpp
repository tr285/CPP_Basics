#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000];

    // Input array
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Bubble Sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                // swap
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
