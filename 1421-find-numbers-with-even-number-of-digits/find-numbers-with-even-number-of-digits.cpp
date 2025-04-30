class Solution {
public:
    
    bool digits(int n){
        int count=0;
        while(n){

        n=n/10;
        count++;

        }

        if(count%2==0){
            return true;
        }

        return false;
    }

    int findNumbers(vector<int>& nums) {
        int value=0;

        for(int i=0;i<nums.size();i++){
            if(digits(nums[i])){
               value++;
            }
        }

        return value;
    }
};