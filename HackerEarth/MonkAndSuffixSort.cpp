#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int k;
    cin >> s >> k;

    vector<string> v;
    for (int i = 1; i <= s.size(); i++)
    {
        v.push_back(s.substr(s.size() - i, s.size()));
    }

    sort(v.begin(), v.end());

    cout << v[k - 1] << endl;

    return 0;
}