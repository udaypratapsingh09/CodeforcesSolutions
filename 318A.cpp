#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << 2 * (k - (n + 1) / 2);
    }
}