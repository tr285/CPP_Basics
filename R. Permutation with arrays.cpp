#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N], B[N];

    // Input array A
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Input array B
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Sort both arrays
    sort(A, A + N);
    sort(B, B + N);

    // Compare arrays
    for(int i = 0; i < N; i++) {
        if(A[i] != B[i]) {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";

    return 0;
}