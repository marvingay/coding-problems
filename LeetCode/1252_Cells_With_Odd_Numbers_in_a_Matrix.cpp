class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> cols(m, 0);
        vector<int> rows(n, 0);
        int oddCells = 0;
        
        for (int i=0; i < indices.size(); i++) {
            rows[indices[i][0]]++;
            cols[indices[i][1]]++;
        }
        
        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                if ((rows[i] + cols[j]) % 2 == 1) oddCells++;
            }
        }
        
        return oddCells;
    }
};