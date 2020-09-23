#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        int l;
        string s;
        cin >> l >> s;
        if (l == 0) break;

        int minD = 2000000;
        int curD = 0;
        char pos = '.';

        for (int i=0; i < l; i++) {
            if (s[i] == 'Z') {
                minD = 0;
                break;
            }
            if (s[i] == 'R') {
                if (pos == 'D') {
                    if (curD < minD) {
                        minD = curD;
                    }
                }
                curD = 1;
                pos = 'R';
                continue;
            }
            if (s[i] == 'D') {
                if (pos == 'R') {
                    if (curD < minD) {
                        minD = curD;
                    }
                }
                curD = 1;
                pos = 'D';
                continue;
            }
            curD++;
        } 

        cout << minD << endl;
    }
    return 0;
}