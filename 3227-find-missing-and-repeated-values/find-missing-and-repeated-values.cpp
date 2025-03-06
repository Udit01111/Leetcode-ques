class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
         int n = grid.size();
        int total = n * n;
        vector<int> freq(total + 1, 0);
        int repeated = -1, missing = -1;
        
        // Count occurrences of each number in the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                freq[grid[i][j]]++;
            }
        }
        
        // Identify the missing and repeated values
        for (int i = 1; i <= total; ++i) {
            if (freq[i] == 2) repeated = i;
            if (freq[i] == 0) missing = i;
        }
        
        return {repeated, missing};
    }
};