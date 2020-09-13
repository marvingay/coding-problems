#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                arr[i][j] = a;
            }
        }

        int inv = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = i; k < n; k++)
                {
                    for (int l = j; l < n; l++)
                    {
                        if (arr[i][j] > arr[k][l])
                        {
                            inv++;
                        }
                    }
                }
            }
        }

        cout << inv << endl;
    }
    return 0;
}