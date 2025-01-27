class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //pivot
        int idx=-1;
        int n=nums.size();
        int j=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }

        if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;}

        //sort after pivot
        sort(nums.begin()+ idx+1,nums.end());

        //find no. just greater than pivot
         for(int i= idx; i<n; i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
         }

         //swap pivot & j;

         swap(nums[idx],nums[j]);

         return;




    }
};