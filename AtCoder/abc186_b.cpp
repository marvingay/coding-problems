#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    int a[h][w];
    for (int i=0; i < h; i++) {
        for (int j=0; j < w; j++) {
            cin >> a[i][j];
        }

    }
    int lowest = 1e9;
    for (int i=0; i < h; i++) {
        for (int j=0; j < w; j++) {
            lowest = min(lowest, a[i][j]);
        }
    }

    int ans = 0;
    for (int i=0; i < h; i++) {
        for (int j=0; j < w; j++) {
            ans += a[i][j] - lowest;
        }
    }

    cout << ans << endl;
    return 0;
}