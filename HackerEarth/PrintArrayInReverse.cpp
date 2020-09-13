#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = N - 1; i >= 0; i--)
        cout << arr[i] << endl;

    return 0;
}