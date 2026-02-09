#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int Min = arr[0];
    int position = 1; // 1-indexed

    for (int i = 1; i < N; i++) {
        if (arr[i] < Min) {
            Min = arr[i];
            position = i + 1;
        }
    }

    cout << Min << " " << position << endl;
    return 0;
}
