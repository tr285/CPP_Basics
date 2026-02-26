# include <iostream>
using namespace std;
int main (){
    int N;
    cin >>N;
    
    long long a=0, b=0, fib;
    if (N==1) {
        cout <<0;

    }else if (N==2){
        cout << 1;

    }
    else {
        for (int i=3;i<=N;i++){
            fib= a+b;
            a=b;
            b=fib;

        }
        cout << fib;
    }
}