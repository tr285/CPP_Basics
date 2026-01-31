#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    while (B != 0) {
        int rem = A % B;
        A = B;
        B = rem;
    }

    cout << A;
    return 0;
}
