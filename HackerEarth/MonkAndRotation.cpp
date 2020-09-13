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
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        k %= n;

        for (int i = 0; i < n; i++)
        {
            int c = (i + (n - k)) % n;
            cout << arr[c] << " ";
        }
        cout << endl;
    }
    return 0;
}