#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x;
    cin >> n >> x;
    ll ans = 0;

    int table[n][n];

    for (int i=1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) ans++;
    }
    cout << ans << endl;

    return 0;
}