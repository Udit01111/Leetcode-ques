class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n < 2)
            return false;

        // Calculate the slope using the first two points
        int dx = coordinates[1][0] - coordinates[0][0];
        int dy = coordinates[1][1] - coordinates[0][1];

        // Check slope consistency for all points
        for (int i = 2; i < n; i++) {
            int dx1 = coordinates[i][0] - coordinates[0][0];
            int dy1 = coordinates[i][1] - coordinates[0][1];

            // Cross multiplication to avoid floating-point precision issues
            if (dx * dy1 != dy * dx1) {
                return false;
            }
        }
        return true;
        
    }
};