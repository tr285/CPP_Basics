#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    double x ,p;
    cin >>  x >> p;
    double y = (100 *p)/(100 - x);
    cout << fixed << setprecision(2) <<  y <<endl;
    return 0;

}