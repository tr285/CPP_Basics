#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int A[200];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int minCount = 1000000;

    for(int i = 0; i < N; i++){

        int count = 0;
        int x = A[i];

        while(x % 2 == 0){
            count++;
            x /= 2;
        }

        if(count < minCount){
            minCount = count;
        }
    }

    cout << minCount;

    return 0;
}