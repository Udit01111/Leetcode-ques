class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int max_val = *max_element(nums.begin(), nums.end());
        long long result = 0;
        int count = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            if (nums[right] == max_val) {
                count++;
            }

            // shrink the window until count >= k
            while (count >= k) {
                result += n - right; // all subarrays starting from 'left' and
                                     // ending at or after 'right'
                if (nums[left] == max_val) {
                    count--;
                }
                left++;
            }
        }

        return result;
    }
};