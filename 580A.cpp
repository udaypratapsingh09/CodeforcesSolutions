#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev = 0;
    int l = 0;
    int ans = 0;
    while (n--)
    {
        int num;
        cin >> num;
        if (num >= prev)
        {
            l++;
        }
        else
        {
            ans = max(ans, l);
            l = 1;
        }
        prev = num;
    }
    ans = max(ans, l);
    cout << ans;
}