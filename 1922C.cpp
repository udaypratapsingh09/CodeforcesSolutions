#include <bits/stdc++.h>
using namespace std;

int getAns(vector<int> v, int x, int y)
{
    int ans = 0;
    if (x < y)
    {
        for (int i = x - 1; i < y; i++)
        {
            if (i == 0)
            {
                ans++;
                continue;
            }
            else if (v[i + 1] - v[i] < v[i] - v[i - 1])
            {
                ans++;
            }
            else
            {
                ans += v[i + 1] - v[i];
            }
        }
    }
    if (x > y)
    {
        for (int i = x; i < y - 1; i--)
        {
            if (i == v.size())
            {
                ans++;
                continue;
            }
            else if (v[i + 1] - v[i] > v[i] - v[i - 1])
            {
                ans++;
            }
            else
            {
                ans += v[i] - v[i - 1];
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            v.push_back(n);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            int ans = getAns(v, x, y);
            cout << "ANS:  " << ans << endl;
        }
    }
}