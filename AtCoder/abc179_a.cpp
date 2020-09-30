#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    char lastLetter = s[s.length()-1];
    if (lastLetter == 's') cout << s + "es" << endl;
    else cout << s + "s" << endl;
    return 0;
}