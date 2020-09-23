#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int X[n], Y[n];
    string ans = "";
    int solved = false;
    for (int i=0; i < n; i++) {
        cin >> X[i] >> Y[i];
        if (X[i] != Y[i]) {
            ans = "rated";
            solved = true;
        }
    }
    if (solved) cout << ans << endl;
    else {
        int Z[n];
        for (int i=0; i < n; i++) Z[i] = Y[i];
        sort(Z, Z+n);
        for (int i=0; i < n; i++) {
            if (X[i] != Z[n-1-i]) {
                ans = "unrated";
                solved = true;
                break;
            }
        }
        if (solved) cout << ans << endl;
        else cout << "maybe" << endl;
    }

    return 0;
}