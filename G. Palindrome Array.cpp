# include <iostream>
using namespace std;
int main (){
    int N;
     cin >>N;
   long long A[N];
    for (int i=0;i<N;i++){
        cin >> A[i];

    }
    int left =0,right = N-1;
    bool ispalidrome = true;
    while (left <right){
        if(A[left] != A[right]){
            ispalidrome = false;
            break;
        }
        left++;
        right--;
    }
    if(ispalidrome){
        cout << "YES";
    }else {
    cout << "NO";
   
}
 return 0;
}