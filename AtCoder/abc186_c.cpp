#include <bits/stdc++.h>
using namespace std;

#define ll long long

int decToOctal(int x) {
    vector<int> digits;
    while (x != 0) {
        digits.push_back(x % 8);
        x /= 8;
    }
    string octal = "";
    for (int i=digits.size()-1; i >= 0; i--) {
        octal += to_string(digits[i]);
    }

    return stoi(octal);
}

bool hasSeven(int x) {
    while (x > 9) {
        int digit = x % 10;
        if (digit == 7) return true;
        x /= 10;
    }
    if (x == 7) return true;

    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;

    for (int i=1; i <= n; i++) {
        int octal = decToOctal(i);
        if (!hasSeven(i) && !hasSeven(octal)) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}