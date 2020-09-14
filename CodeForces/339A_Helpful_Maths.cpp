#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<char> ops;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            ops.push_back(s[i]);
        }
    }
    sort(ops.begin(), ops.end());

    for (int i = 0; i < ops.size(); i++)
    {
        if (i == 0)
        {
            cout << ops[i];
        }
        else
        {
            cout << '+' << ops[i];
        }
    }

    cout << endl;

    return 0;
}