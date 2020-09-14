#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "--X" || s == "X--")
        {
            x--;
        }
        if (s == "++X" || s == "X++")
        {
            x++;
        }
    }

    cout << x << endl;

    return 0;
}