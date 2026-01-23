#include <iostream>
using namespace std;
int main()
{
    int x;
    int bi[32];
    cin >> x;

    for (int i = 0; i < 32; i++)
    {
        int current = (31 - i);
        bi[current] = (x % 2);
        x /= 2;
    }
    for (int j = 0; j < 32; j++)
    {
        cout << bi[j];
    }
}
