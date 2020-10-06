#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int w, l = -1;
    int s = 0, t = 0;

    for (int i=0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        s += x;
        t += y;

        if (s > t) {
            if (s-t > l) {
                w = 1;
                l = s-t;
            }
        } else {
            if (t-s > l) {
                w = 2;
                l = t-s;
            }
        }
    }

    cout << w << " " << l << endl;


    return 0;
}