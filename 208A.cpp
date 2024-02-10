#include <bits/stdc++.h>
using namespace std;

int findNextWub(string s, int start, int size)
{
    for (int i = start; i < size - 2; i++)
    {
        if (s.substr(i, 3) == "WUB")
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    string original = "";
    int i = 0;
    int addSpace = 1;
    while (i < size)
    {
        int nextWub = -1;
        if (i < size - 2)
        {
            nextWub = findNextWub(s, i, size);
        }
        if (nextWub == i)
        {
            if (original != "" && addSpace)
            {
                original += " ";
                addSpace = 0;
            }
            i += 3;
        }
        else
        {
            addSpace = 1;
            original += s[i];
            i++;
        }
    }
    cout << original;
}