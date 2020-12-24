#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int L;
    cin >> L;

    ll ans = 1;
    for (int i=ans; i <= 11; i++) {
        ans *= L - i;
        ans /= i;
    }

    cout << ans << endl;
    return 0;
}