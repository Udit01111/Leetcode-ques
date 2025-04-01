class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double maxArea = 0.0;

        // Iterate over all combinations of three points
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    // Extracting points
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];

                    // Compute area using the Shoelace formula
                    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) +
                                            x3 * (y1 - y2));

                    // Update maxArea if a larger area is found
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};