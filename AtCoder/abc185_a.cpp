#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a(4);
    int lowest = 1e9;
    for (int i=0; i < 4; i++) {
        cin >> a[i];
        lowest = min(a[i], lowest);
    }

    cout << lowest << endl;
    return 0;
}