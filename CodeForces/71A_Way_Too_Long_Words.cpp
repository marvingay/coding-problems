#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        int k = word.length();

        if (word.length() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            string newWord = word.substr(0, 1) + to_string(k - 2) + word.substr(k - 1, 1);
            cout << newWord << endl;
        }
    }

    return 0;
}