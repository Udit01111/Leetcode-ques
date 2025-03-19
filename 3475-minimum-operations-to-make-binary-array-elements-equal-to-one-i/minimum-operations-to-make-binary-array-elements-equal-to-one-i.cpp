class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        if(n<3) return -1;

        for(int i=0; i<=nums.size() -3;i++){
            if(nums[i]==0){
                nums[i+2] ^=1;
                nums[i+1] ^=1;
                nums[i] ^=1;
                count++;
            }
            
        }
    
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return -1;
        }


        return count;
    }
};