#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;   // ✅ FIX 1

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    long long result = 0;
    int i = 0, j = 0;

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
                j++;
            }

            result += countA * countB;
        }
    }

    cout << result << "\n";
    return 0;
}