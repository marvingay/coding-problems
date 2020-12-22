#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    string ans = "hello";
    int ct = 0;
    for (int i=0; i < s.length(); i++) {
        if (ct == 5) break;
        if (s[i] == ans[ct]) {
            ct++;
        }
    }
    if (ct == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}