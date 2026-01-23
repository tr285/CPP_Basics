# include <iostream>
using namespace std;
int main () {
    int a,b,c;
    cin >> a >> b >>c;
    if (a>b || a>c) {
        cout << " a is gretere then b and c" << endl;
    } else if ( b>c || b>a) {
        cout << "b is greater then c and a" << endl;

    } else if (c>a || c>b) {
        cout << "c is greater then a and b" << endl;
    }
    else {
        cout << " a,b and c are equal " << endl;
    }


}