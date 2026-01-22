#include<iostream>
using namespace std;
int main (){
    char x ;
    cin >> x;
    char y = char (x+1);
    if(x == 'z'){
        cout << 'a';
    }else{
    cout << y ;}
    return 0;
}