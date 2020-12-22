#include <bits/stdc++.h>
using namespace std;

#define ll long long
// practice
int getIndex(vector<char> arr, char value)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    vector<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (getIndex(v, s[i]) == -1)
        {
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }

    cout << ans << endl;

    return 0;
}