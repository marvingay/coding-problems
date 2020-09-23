#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin >> n >> str;
    unordered_set<char> s;
    for (char c : str) {
        s.insert(tolower(c)); 
    }

    if (s.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}