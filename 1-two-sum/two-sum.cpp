class Solution {
public:
//Udit
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx;
        for(int i=0;i<nums.size();i++){
             for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    idx.push_back(i);
                    idx.push_back(j);
                }
             }
    
        }

        return idx;

    }
};