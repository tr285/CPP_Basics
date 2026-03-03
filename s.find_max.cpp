#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[100][100];

    // Input matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int X;
    cin >> X;

    bool found = false;

    // Search in matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(A[i][j] == X) {
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(found)
        cout << "will not take number";
    else
        cout << "will take number";

    return 0;
}
