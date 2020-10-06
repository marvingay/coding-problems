#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, h;
    cin >> n >> h;
    vector<int> stacks(n, 0);
    for (int i=0; i < n; i++) cin >> stacks[i];

    int c;
    bool hasBox = false;
    int pos = 0;

    while (cin >> c) {
        if (c == 0) break;
        if (c == 1) {
            if (pos == 0) continue;
            else pos--;
        }
        if (c == 2) {
            if (pos == n-1) continue;
            else pos++;
        }
        if (c == 3) {
            if (hasBox) continue;
            if (stacks[pos] > 0) {
                hasBox = true;
                stacks[pos]--;
            } else continue;
        }
        if (c == 4) {
            if (!hasBox) continue;
            if (stacks[pos] == h) continue;
            else {
                hasBox = false;
                stacks[pos]++;
            }
        }
    }

    for (int i=0; i < n; i++) {
        cout << stacks[i] << " ";
    }
    
    cout << endl;

    return 0;
}