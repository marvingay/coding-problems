#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5][5];
    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    int ans = abs(x - 3) + abs(y - 3);

    cout << ans << endl;

    return 0;
}