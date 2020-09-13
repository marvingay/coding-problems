#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        string s;
        int n, m;
        cin >> s >> n >> m;

        sort(s.begin() + n, s.begin() + m + 1, greater<char>());
        cout << s << endl;
    }

    return 0;
}