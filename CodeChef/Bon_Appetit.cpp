#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct customer {
    int s, f, p;
};

bool cmp(customer c1, customer c2) {
    return (c1.f < c2.f);
}

int solve(vector<customer> &v) {
    int y = 0;
    int ans = 1;
    for (int x = 1; x < v.size(); x++) {
        if (v[x].s >= v[y].f) {
            ans++;
            y = x;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        map<int, vector<customer>> m;
        map<int, vector<customer>> ::iterator iter;

        for (int i=0; i < n; i++) {
            customer person;
            cin >> person.s >> person.f >> person.p;
            m[person.p].push_back(person);
        }

        int ans = 0;

        for (iter = m.begin(); iter != m.end(); iter++) {
            int k = iter->first;
            vector<customer> v = iter->second;
            sort(v.begin(), v.end(), cmp);
            ans = ans + solve(v);
        }
        cout << ans << endl;
    }

    return 0;
}