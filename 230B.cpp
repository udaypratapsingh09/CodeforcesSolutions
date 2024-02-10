#include <bits/stdc++.h>
using namespace std;

string isTPrime(long long int num)
{
    if (num == 4)
        return "YES";
    if (num < 9)
        return "NO";
    if (num > 4 && num % 2 == 0)
        return "NO";
    long long int root = sqrt(num);
    if (root * root != num)
        return "NO";
    for (int i = 3; i * i <= root; i += 2)
    {
        if (root % i == 0)
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    long long int n;
    cin >> n;
    while (n--)
    {
        long long int num;
        cin >> num;
        cout << isTPrime(num) << endl;
    }
}