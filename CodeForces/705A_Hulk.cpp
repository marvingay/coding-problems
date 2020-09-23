#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    string ans[101];
    for (int i=0; i < 101; i++) ans[i] = "";
    ans[1] = "I hate it";
    string love = "that I love it";
    string hate = "that I hate it";

    for (int i=2; i <= n; i++) {
        string base = ans[i-1].substr(0,ans[i-1].length()-2);
        if (i % 2 == 0) {
            ans[i] = base + love;
        } else {
            ans[i] = base + hate;
        }
    }

    cout << ans[n] << endl;
    return 0;
}