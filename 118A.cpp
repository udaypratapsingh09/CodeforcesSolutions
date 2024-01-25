#include <bits/stdc++.h>
using namespace std;

int isVowel(char c)
{
    string vowels = "AEIOUYaeiouy";
    for (char &i : vowels)
    {
        if (c == i)
            return 1;
    }
    return 0;
}

int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (char &i : s)
    {
        if (!isVowel(i))
        {
            ans += ".";
            if (i < 97)
            {
                i += 32;
            }
            ans += i;
        }
    }
    cout << ans;
}