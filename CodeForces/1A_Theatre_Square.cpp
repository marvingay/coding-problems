#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long double n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil((n / a)) * ceil(m / a);
    cout << ans << endl;

    return 0;
}