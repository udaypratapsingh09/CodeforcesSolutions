#include <iostream>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int ans = 0;
    long long int x = 0;
    long long int y = 0;
    while (n > 0)
    {
        n -= a;
        x++;
    }
    while (m > 0)
    {
        m -= a;
        y++;
    }
    cout << x * y;
}
