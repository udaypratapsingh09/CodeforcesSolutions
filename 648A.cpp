#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max_a = 0;
    int max_d = 0;
    int row, col;
    cin >> row >> col;
    int arr[col] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            char c;
            cin >> c;
            if (c == '*' && arr[j] == 0)
            {
                arr[j] = row - i;
            }
        }
    }
    for (int i = 1; i < col; i++)
    {
        if (arr[i] - arr[i - 1] > max_a)
        {
            max_a = arr[i] - arr[i - 1];
        }
        if (arr[i - 1] - arr[i] > max_d)
        {
            max_d = arr[i - 1] - arr[i];
        }
    }
    cout << max_a << " " << max_d;
}