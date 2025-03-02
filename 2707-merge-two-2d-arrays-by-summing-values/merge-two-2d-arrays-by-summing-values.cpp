class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
          map<int, int> mergedMap;
        
        // Insert values from nums1
        for (auto& pair : nums1) {
            mergedMap[pair[0]] += pair[1];
        }

        // Insert values from nums2
        for (auto& pair : nums2) {
            mergedMap[pair[0]] += pair[1];
        }

        // Convert map to vector
        vector<vector<int>> result;
        for (auto& entry : mergedMap) {
            result.push_back({entry.first, entry.second});
        }
        
        return result;
    }
};