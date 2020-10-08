#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct citizen {
    int cobol, pole, donut;
};

bool cmp(citizen c1, citizen c2) {
    return c1.pole + c1.donut > c2.pole + c2.donut;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<citizen> v(n);
    for (int i=0; i < n; i++) {
        citizen c;
        cin >> c.cobol >> c.pole >> c.donut;
        v.push_back(c);
    }
    sort(v.begin(), v.end(), cmp);
    int t = 0, maxT = 0;
    for (int i=0; i < n; i++) {
        t += v[i].cobol;
        maxT = max(maxT, t + v[i].donut + v[i].pole); 
    }

    cout << maxT << endl;

    return 0;
}