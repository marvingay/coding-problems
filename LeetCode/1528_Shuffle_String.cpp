class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        
        for (int i=0; i < s.length(); i++) {
            int n = indices[i];
            ans[n] = s[i];
        }
        
        return ans;
    }
}; 