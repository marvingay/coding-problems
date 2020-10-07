#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int depth = 0, dPos = 0, maxSeq = 0, msPos = 0, cnt = 0, seqStart = 0;
    stack<int> s;
    for (int i=0; i < n; i++) {
        int x;
        cin >> x;
        cnt++;
        if (x == 1) {
            s.push(x);
            if (s.size() == 1) {
                seqStart = i + 1;
            }
        }
        if (x == 2) {
            s.pop();
        }
        if (s.size() > depth) {
            depth = s.size();
            dPos = i + 1;
        }
        if (s.empty()) {
            if (cnt > maxSeq) {
                maxSeq = cnt;
                msPos = seqStart;
            }
            cnt = 0;
        }
    }
    cout << depth << " " << dPos << " " << maxSeq << " " << msPos << endl;

    return 0;
}