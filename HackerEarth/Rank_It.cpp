#include <bits/stdc++.h>
using namespace std;

#define ll long long

int binary_search(int v[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == key) {
            return mid;
        }
        else if (v[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, q;
    cin >> N;
    int A[N];
    for (int i=0; i < N; i++) cin >> A[i];
    sort(A, A+N);
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int rank = binary_search(A, 0, N-1, x); 
        cout << rank + 1 << endl;
    }
    return 0;
}