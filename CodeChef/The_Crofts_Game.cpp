#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        int B[n];
        for (int i=0; i < n; i++) cin >> A[i]; 
        for (int i=0; i < n; i++) cin >> B[i];
        bool c[n] = {false};
        vector<pair<int, int>> d;
        for (int i=0; i < n; i++) {
            int x = A[i] + B[i];
            int y = i;
            pair<int, int> p = make_pair(x, y);
            d.push_back(p);
        }

        sort(d.begin(), d.end(), greater<pair<int,int>>());
        int first = 0;
        int second = 0;
        bool turn = true;

        for (int i=0; i < n; i++) {
            if (turn) {
                int x = d[i].second;
                first = first + A[x];
                turn = false;
            } else {
                int x = d[i].second;
                second = second + B[x];
                turn = true;
            }
        }

        if (first > second) cout << "First" << endl;
        else if (second > first) cout << "Second" << endl;
        else cout << "Tie" << endl;
    }
    

    return 0;
}