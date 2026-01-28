#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string N;
    cin >> N;
    string rev = N;
    reverse(rev.begin(), rev.end());
    int i = 0;
    while (i < rev.size() && rev[i] == '0')
    {
        i++;
    }

    string reversedNumber;
    if (i == rev.size())
        reversedNumber = "0";
    else
        reversedNumber = rev.substr(i);
    cout << reversedNumber << endl;

    if (N == reversedNumber)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
