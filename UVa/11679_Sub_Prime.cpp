#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while (true) {
        int b, n;
        cin >> b >> n;
        if (b == 0) break;

        int r[b];
        for (int i=0; i < b; i++) cin >> r[i];

        for (int i=0; i < n; i++) {
            int d, c, v;
            cin >> d >> c >> v;
            r[d-1] -= v;
            r[c-1] += v;
        }

        bool ans = true;
        for (int i=0; i < b; i++) {
            if (r[i] < 0) {
                ans = false;
                break;
            }
        }

        if (ans) cout << 'S' << endl;
        else cout << 'N' << endl;

    }
    return 0;
}