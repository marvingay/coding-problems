#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for (int i=0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}