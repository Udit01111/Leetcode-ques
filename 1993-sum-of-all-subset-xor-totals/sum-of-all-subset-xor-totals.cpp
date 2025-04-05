class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }

private:
    int dfs(const vector<int>& nums, int index, int currXor) {
        if (index == nums.size()) {
            return currXor;
        }
        // Include nums[index]
        int withCurr = dfs(nums, index + 1, currXor ^ nums[index]);
        // Exclude nums[index]
        int withoutCurr = dfs(nums, index + 1, currXor);
        return withCurr + withoutCurr;
    }
};
