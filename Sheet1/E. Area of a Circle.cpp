#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;

    const double PI = 3.141592653;
    cout << fixed << setprecision(9);
    cout << PI * r * r << endl;

    return 0;
}
