#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct chicken {
    int x, v, t;
};

bool cmp(chicken c1, chicken c2) {
    return c1.x > c2.x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int C;
    int T = 1;
    cin >> C;
    while (T <= C) {
        int n, k, b, t;
        cin >> n >> k >> b >> t;
        vector<int> X;
        vector<int> V;
        vector<chicken> chickens;
        for (int i=0; i < n; i++) {
            int a; cin >> a;
            X.push_back(a);
        } 
        for (int i=0; i < n; i++) {
            int a; cin >> a;
            V.push_back(a);
        } 
        for (int i=0; i < n; i++) {
            chicken c;
            c.x = X[i];
            c.v = V[i];
            c.t = X[i] + V[i] * t;
            chickens.push_back(c);
        }
        sort(chickens.begin(), chickens.end(), cmp); 
        int ans = 0;
        int swaps = 0;
        int cnt = 0;
        for (int i=0; i < chickens.size(); i++) {
            if (chickens[i].t >= b) {
                cnt++;
                if (ans > 0) swaps += ans;
            } else {
                ans++;
            }
            if (cnt == k) {
                break;
            }

        }
        if (cnt == k) {
            cout << "Case #" << T++ << ": " << swaps << endl;
        } else {
            cout << "Case #" << T++ << ": " << "IMPOSSIBLE" << endl;
        }

    }

    return 0;
}