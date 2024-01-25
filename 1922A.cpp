#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        if (a == c || b == c)
        {
            cout << "NO" << endl;
            continue;
        }
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
}