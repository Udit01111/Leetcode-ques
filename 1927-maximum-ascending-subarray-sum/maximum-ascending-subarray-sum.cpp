class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum=nums[0];
        int cur_sum=nums[0];
        for(int i=1; i<nums.size(); ++i){
            if(nums[i]>nums[i-1]){
                cur_sum += nums[i];
            }
            else {
                maxSum = max(maxSum, cur_sum);
                cur_sum=nums[i];}
        }

        return max(maxSum, cur_sum);
    }
};