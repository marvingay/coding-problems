#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i=0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    ll vars = 0;
    for (ll i=0; i < n; i++) {
        ll x = v[i] + k;
        ll y = v[i] - k;
        ll low = lower_bound(v.begin(), v.end(), x) - v.begin();
        ll high = upper_bound(v.begin(), v.end(), y) - v.begin();
        vars += n - low;
        vars += high;
    }
    cout << vars / 2 << endl;
    return 0;
}