#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int ans = 0;
    int a = scores[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= a && scores[i] > 0)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}