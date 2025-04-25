class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        unordered_map<int, long long> countMap;
        countMap[0] = 1; // Base case for prefix sum
        long long ans = 0;
        int prefix = 0;

        for (int num : nums) {
            // Increment prefix count if num % modulo == k
            if (num % modulo == k)
                prefix++;

            // Get current prefix modulo
            int currMod = prefix % modulo;

            // Calculate target: (currMod - k + modulo) % modulo
            int target = (currMod - k + modulo) % modulo;

            // Add the number of prefixes that would make a valid subarray
            if (countMap.find(target) != countMap.end())
                ans += countMap[target];

            // Update map with current prefix
            countMap[currMod]++;
        }

        return ans;
    }
};