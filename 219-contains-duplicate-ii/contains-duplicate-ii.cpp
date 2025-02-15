class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int, int> index_map; // Stores last seen index of each number
        for (int i = 0; i < nums.size(); i++) {
            if (index_map.count(nums[i]) && i - index_map[nums[i]] <= k) {
                return true;
            }
            index_map[nums[i]] = i; // Update last seen index
        }
        return false;
    }


};