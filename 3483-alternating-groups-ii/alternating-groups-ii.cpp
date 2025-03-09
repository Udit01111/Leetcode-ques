class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
      int n = colors.size(), count = 0;
        if (k > n) return 0; // Edge case: If k is larger than array size

        // Extend the array to handle circular nature
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }

        // Sliding window validation
        int validLength = 1;  // Start with a valid length of 1

        for (int i = 1; i < n + k - 1; i++) {
            if (colors[i] != colors[i - 1]) {
                validLength++; // If alternating, extend streak
            } else {
                validLength = 1; // Reset if break occurs
            }

            if (validLength >= k) {
                count++; // A valid alternating group found
            }
        }
        return count;
    }
};