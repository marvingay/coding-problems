class Solution {
public:
    int balancedStringSplit(string s) {
        int bStrings = 0;
        int r = 0, l = 0;
        for (int i=0; i < s.length(); i++) {
            if (s[i] == 'R') r++;
            else l++;
            
            if (r == l) {
                bStrings++;
                r = l = 0;
            }
        }
        
        return bStrings;
    }
};