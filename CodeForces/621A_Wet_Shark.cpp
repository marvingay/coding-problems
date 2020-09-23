#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll sum = 0;
    ll odd = 1e18;

    for (int i=0; i < n; i++) {
        ll x; cin >> x;
        sum += x;
        if (x % 2 != 0) odd = min(odd, x);
    }
    if (sum % 2 != 0) sum -= odd;
    cout << sum << endl;
    
    return 0;
}