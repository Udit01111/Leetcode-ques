class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countp=0;
        int countn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                 countn++;
            }
            if(nums[i]>0){countp++;}
        }

        return max(countp,countn);
    }
};