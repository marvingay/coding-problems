#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, y;
    cin >> n >> x >> y;
    int A[n], B[n];
    for (int i=0; i < n; i++) cin >> A[i];
    for (int i=0; i < n; i++) cin >> B[i];

    // Get differences in tips and assign based on max difference.
    pair<int, int> D[n];
    for (int i=0; i < n; i++) {
        int d = abs(A[i] - B[i]);
        pair<int,int> p = make_pair(d, i);
        D[i] = p;
    }

    sort(D, D+n, greater<pair<int,int>>());
    int andyO = 0, bobO = 0;
    int tips = 0;
    for (int i=0; i < n; i++) {
        int t = D[i].second; 
        if (A[t] > B[t]) {
            if (andyO + 1 <= x) {
                tips = tips + A[t];
                andyO++;
            } else {
                tips = tips + B[t];
                bobO++;
            }
        }  else {
            if (bobO + 1 <= y) {
                tips = tips + B[t];
                bobO++;
            } else {
                tips = tips + A[t];
                andyO++;
            }
        }
    }

    cout << tips << endl;

}
