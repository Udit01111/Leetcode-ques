class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currsum=0;
        int maxsum=nums[0];
        for(int i: nums){
            if(currsum<0) currsum=0;
            currsum += i;
            maxsum =max(currsum,maxsum);
            }
         return maxsum;
        
        }
       
    
};