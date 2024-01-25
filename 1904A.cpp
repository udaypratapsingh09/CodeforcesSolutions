#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> knightPos(int kx, int ky, int a, int b)
{
    int n = 8;
    if (a == b)
    {
        n = 4;
    }
    vector<vector<int>> knight;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        if (i == 4)
        {
            swap(a, b);
        }
        if (i % 4 < 2)
        {
            y = ky + b;
        }
        else
        {
            y = ky - b;
        }
        if (i % 2 == 0)
        {
            x = kx + a;
        }
        else
        {
            x = kx - a;
        }
        knight.push_back({x, y});
    }
    return knight;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int a, b;
        cin >> a >> b;
        int kx, ky;
        cin >> kx >> ky;
        int qx, qy;
        cin >> qx >> qy;
        vector<vector<int>> knight = knightPos(kx, ky, a, b);
        for (auto &i : knight)
        {
            if (abs(qx - i[0]) == a && abs(qy - i[1]) == b)
            {
                ans++;
            }
            else if ((abs(qx - i[0]) == b && abs(qy - i[1]) == a))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}