#include <iostream>
using namespace std;

void print1 () {
    int n, m;
    cin >> n >> m;

    long long a[n];
    long long b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    int i = 0, j = 0;
    long long result= 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else {
            long long value = a[i];
            long long countA = 0, countB = 0;

            while (i < n && a[i] == value) {
                countA++;
                i++;
            }

            while (j < m && b[j] == value) {
                countB++;
                j++;
            }

            result += countA * countB;
        }
    }

    cout << result << endl;

}
void print2() {
    int n;
    cin >>n;
    int arr[n];
   for (int i=0;i<n;i++)
    cin >> arr[i];
    int sum =0;
    int k=3;
    // first window
    for (int i =0;i<k;i++)
   


      int sum += arr[i];
        //sliding window
        for (int i=3;i<n;i++){
            sum = sum-arr[i-3] +arr[i];
        
        cout << sum;
        }
 
     

   

}
int main (){

    print2 ();
}