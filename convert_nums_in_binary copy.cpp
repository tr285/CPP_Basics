#include <iostream>
using namespace std;
int main()
{
    int x;
    int bi[8];
    cin >> x;

    for (int i = 0; i < 8; i++)
    {
        int current = (7 - i);
        bi[current] = (x % 2);
        x /= 2;
    }
    for (int j = 0; j < 8; j++)
    {
        cout << bi[j];
    }
}
