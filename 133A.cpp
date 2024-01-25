#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string out = "NO";
    for (char &i : s)
    {
        if (i == 'H' || i == 'Q' || i == '9')
        {
            out = "YES";
            break;
        }
    }
    cout << out;
}