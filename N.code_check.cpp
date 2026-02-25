# include <iostream>
using namespace std;
int main (){
    int A,B;
    cin >> A >> B;
    string s;
    cin >> s;
    // cheak possible A (A+1th character)
if (s[A]!='-'){
    cout << "NO";
    return 0;
}
// check other characters  are digits
for(int i=0; i< s.length();i++){
    if(i == A) continue; // skip "-"
    if(s[i]<'0' ||s[i]>'9' ){
        cout << "NO";
        return 0;
    }


    
}
cout << "YES";
return 0;

}
