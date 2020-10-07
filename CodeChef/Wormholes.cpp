#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Partially correct
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n >> x >> y;
    vector<pair<int, int>> c(n);
    for (int i=0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        c[i] = make_pair(s, e);
    }
    
    vector<int> v(x);
    vector<int> w(y);
    for (int i=0; i < x; i++) cin >> v[i];
    for (int i=0; i < y; i++) cin >> w[i];
    sort(w.begin(), w.end());
    sort(v.begin(), v.end());
    sort(c.begin(), c.end());
    
    int minInt = 1e8;

    for (int i=0; i < n; i++) {
        int start = c[i].first;
        int bestStart;
        for (int j=0; j < x; j++) {
            if (v[j] <= c[i].first) {
                bestStart = v[j];
            } else break; 
        }

        int bestEnd, k = y-1;
        for (int k=y-1; k >= 0; k--) {
            if (w[k] >= c[i].second) {
                bestEnd = w[k]; 
            } else break;
        }

        minInt = min(minInt, bestEnd - bestStart + 1);
    }

    cout << minInt << endl;
    return 0;
}