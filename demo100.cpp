#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }

    int i = 0; // pointer for array a

    for (int j = 0; j < m; j++) {
        while (i < n && a[i] < b[j]) {
            i++;
        }
        cout << i << " ";
    }

    return 0;
}