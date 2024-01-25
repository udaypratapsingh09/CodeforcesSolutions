#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans = "I hate ";
    for (int i = 1; i < n; i++)
    {
        ans += "that ";
        if (i % 2 == 0)
        {
            ans += "I hate ";
        }
        else
        {
            ans += "I love ";
        }
    }
    ans += "it";
    cout << ans;
}