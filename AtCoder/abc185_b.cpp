#include <bits/stdc++.h>
using namespace std;

#define ll long long
struct Cafe {
    int enter, leave;
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, t;
    cin >> n >> m >> t;
    int curr_time = 0;
    int life = n;
    while (m--) {
        Cafe c;
        cin >> c.enter >> c.leave;

        life -= c.enter - curr_time;
        if (life <= 0) {
            break;
        }

        life += c.leave - c.enter;

        if (life > n) {
            life = n;
        }
        curr_time = c.leave;
    
    }
    life -= t - curr_time;
    if (life > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}