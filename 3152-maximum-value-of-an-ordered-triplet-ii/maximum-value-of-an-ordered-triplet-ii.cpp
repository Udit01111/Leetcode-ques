class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res= LLONG_MIN;
        long long n = nums.size();
        // for(int i=0; i<n;i++){
        //     for(int j= i+1; j<n ;j++){
        //         for(int k=j+1;k<n;k++){
        //             long long sum = (1LL*(nums[i] - nums[j]) * nums[k]);
        //             res= max(sum,res);
        //         }
        //     }
        // }

        // if(res <0 ){
        //     return 0;
        // }

        int max_left=nums[0];
        int max_diff =INT_MIN;

        for(int j=1;j<n-1;j++){
            max_diff = max(max_diff, max_left - nums[j]);
            res= max(res, 1LL*(max_diff)*nums[j+1]);
            max_left=max(max_left,nums[j]);
        }


    if(res<0){
        return 0;
    }
        return res;
    }
};