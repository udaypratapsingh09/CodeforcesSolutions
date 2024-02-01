#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    int i = 0;
    int rem = 0;
    while (i < n)
    {
        cin >> num[i];
        i++;
    }
    rem = ((num[0] % 2) + (num[1] % 2) + (num[2] % 2)) / 2;
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 != rem)
        {
            cout << i + 1;
            break;
        }
    }
}