class Solution {
public:
    int check(int x, vector<int>& tops, vector<int>& bottoms) {
        int top_rotations = 0;
        int bottom_rotations = 0;
        int n = tops.size();

        for (int i = 0; i < n; ++i) {
            // If x is not in either top or bottom, it's not possible
            if (tops[i] != x && bottoms[i] != x) {
                return -1;
            }
            // If top is not x, we need to rotate to bring x to top
            else if (tops[i] != x) {
                top_rotations++;
            }
            // If bottom is not x, we need to rotate to bring x to bottom
            else if (bottoms[i] != x) {
                bottom_rotations++;
            }
        }

        return min(top_rotations, bottom_rotations);
    }
 

int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
// Try with tops[0]
        int rotations = check(tops[0], tops, bottoms);
                if (rotations != -1) return rotations;

                        // If failed, try with bottoms[0]
                                return check(bottoms[0], tops, bottoms);

}
}
;