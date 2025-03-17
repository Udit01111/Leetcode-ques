class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i=i+2){
            if(nums[i-1]!=nums[i]){
                count++;
            }
        }

        if(count){return false;}

        return true;
        
    }
};