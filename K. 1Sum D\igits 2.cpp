#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        char ch;
        cin >> ch;    
        arr[i] = ch - '0';    
        sum += arr[i];       
    }

    cout << sum << endl;
    return 0;
}
