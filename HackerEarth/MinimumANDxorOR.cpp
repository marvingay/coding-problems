#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int A[n];
		for (int i=0; i < n; i++) cin >> A[i];
		sort(A, A+n);
		int ans = 1e9;
		for (int i=0; i < n-1; i++) {
			ans = min(ans, A[i] ^ A[i+1]);
		}
		cout << ans << endl;
	}

	return 0;
}