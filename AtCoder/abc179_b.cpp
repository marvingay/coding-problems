#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string ans = "No";
    int count = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;

        if (a != b) count = 0;
        else count++;

        if (count == 3) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}