#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    vector<int> days(n);
    for (int i=0; i < n; i++) cin >> days[i];

    if (n < 3) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> dp(n);
    dp[0] = days[0];
    dp[1] = days[1];
    dp[2] = days[2];

    for (int i=3; i < n; i++) {
        int x = days[i];
        dp[i] = min(dp[i-3]+x, min(dp[i-2]+x, dp[i-1]+x));
    }

    int ans = min(dp[n-3], min(dp[n-2], dp[n-1]));

    cout << ans << endl;

    return 0;
}