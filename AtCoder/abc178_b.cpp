#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll ans;
    ans = max(a*c, b*d);
    ans = max(ans, b*c);
    ans = max(ans, a*d);

    cout << ans << endl;

    return 0;
}