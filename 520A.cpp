#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[26] = {0};
    string s;
    cin >> s;
    int x = 0;
    for (char &i : s)
    {
        if (arr[(i % 97) % 65] == 0)
        {
            arr[(i % 97) % 65] = 1;
            x++;
        }
    }
    if (x == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}