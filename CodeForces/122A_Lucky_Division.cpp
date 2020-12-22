#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool isLucky(int n) {
    while (n / 1 > 9) {
        int d = n % 10;
        n /= 10;

        if (d != 4 && d != 7) return false;
    }

    if (n == 4 || n == 7) return true;
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> lucky_nums;
    for (int i=4; i <= n; i++) {
        if(isLucky(i)) lucky_nums.push_back(i);
    }
    for (int num : lucky_nums) {
        if (n % num == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}