#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    map<int, int> ids;
    for (int i=0; i < n1 + n2 + n3; i++) {
        int id;
        cin >> id;
        if (ids.count(id)) ids[id]++;
        else ids[id] = 1;
    }
    map<int, int> ::iterator it;
    vector<int> list;
    int m = 0;
    for (it=ids.begin(); it != ids.end(); it++) {
        int id = it->first;
        int cnt = it->second;
        if (cnt >= 2) {
            list.push_back(id);
            m++;
        }
    }

    sort(list.begin(), list.end());

    cout << m << endl;
    for (auto id : list) cout << id << endl;

    return 0;
}