#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() < 2)
    {
        cout << 0;
        return 0;
    }
    char c = s[0];
    int x = 0;
    int y = s.size() - 1;
    int l = 0;
    if (s[x] != s[y])
    {
        cout << 0;
        return 0;
    }
    int ans = y - x + 2;
    while (x < y)
    {
        if (s[x] == c)
        {
            x++;
            l++;
        }
        if (s[y] == c)
        {
            y--;
            l++;
        }
        if (s[x] != c && s[y] != c)
        {
            if (s[x] != s[y])
            {
                cout << 0;
                return 0;
            }
            c = s[x];
            if (l < 3 || y == x)
            {
                cout << 0;
                return 0;
            }
            else
            {
                ans = y - x + 2;
            }
            l = 0;
        }
    }
    cout << ans;
}