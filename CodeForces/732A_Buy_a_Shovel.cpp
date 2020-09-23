#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, r;
    cin >> k >> r;
    int total = 0;
    int ans = 0;

    while (total % 10 != r) {
        if (total > 0 && total % 10 == 0) break;
        total += k;
        ans++;
    }

    cout << ans << endl;
    return 0;
}