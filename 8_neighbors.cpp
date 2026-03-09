#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    char a[105][105];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];

    int x,y;
    cin >> x >> y;

    x--; 
    y--;   // convert to 0 index

    for(int i=x-1;i<=x+1;i++){
        for(int j=y-1;j<=y+1;j++){

            if(i==x && j==y) continue; // skip center

            if(i>=0 && i<n && j>=0 && j<m){
                if(a[i][j] != 'x'){
                    cout<<"no";
                    return 0;
                }
            }

        }
    }

    cout<<"yes";
}
