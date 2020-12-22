#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> s(n);
    for (int i=0; i < n; i++) cin >> s[i];
    double ans = 0;
    int thr = 0;
    sort(s.begin(), s.end(), greater<int>());
    for (int i=0; i < n; i++) {
        if (s[i] == 4) ans++;
        if (s[i] == 3) {
            ans++;
            thr++;
        }
        if (s[i] == 2) ans += 0.5;
        if (s[i] == 1) {
            if (thr > 0) thr--;
            else ans += 0.25;
        }
    }
        cout << ceil(ans) << endl;
    return 0;
}