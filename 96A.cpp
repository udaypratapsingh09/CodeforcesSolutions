#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            x = 1;
        }
        if (x >= 7)
        {
            cout << "YES";
            break;
        }
    }
    if (x < 7)
    {
        cout << "NO";
    }
}