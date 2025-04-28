
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size();
        if (m == 0)
            return image;
        int n = image[0].size();
        int originalColor = image[sr][sc];
        if (originalColor == color)
            return image;

        const int dirs[] = {-1, 0, 1, 0, -1};
        auto dfs = [&](auto&& dfs, int r, int c) -> void {
            image[r][c] = color;
            for (int k = 0; k < 4; ++k) {
                int x = r + dirs[k];
                int y = c + dirs[k + 1];
                if (x >= 0 && x < m && y >= 0 && y < n &&
                    image[x][y] == originalColor) {
                    dfs(dfs, x, y);
                }
            }
        };

        dfs(dfs, sr, sc);
        return image;
    }
};