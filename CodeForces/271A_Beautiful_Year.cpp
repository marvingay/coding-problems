#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int y;
    cin >> y;
    int ans = 0;
    while (++y) {
        string str = to_string(y);
        unordered_set<int> s;
        int x = y;
        for (int i=0; i < str.length(); i++) {
            s.insert(x % 10);
            x /= 10;
        }

        if (s.size() == str.length()) {
            ans = y;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}