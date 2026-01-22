# include <iostream>
using namespace std;
int main (){
    int a,b,x;
    cin >> a>> b>> x;
   for (int i=a;i<=b;i++) {
    if (x %i==0) { 
        
        cout << "present in list" << x << endl;

    } else {
        cout << "not present " << endl;
    }
   }
   return 0;
}