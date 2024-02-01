#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int num[3] = {a, b, c};
    sort(num, num + 3);
    int ans = max(a + b + c, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    cout << ans;
}