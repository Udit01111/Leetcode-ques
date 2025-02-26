// class Solution {
// public:
//     int maxAbsoluteSum(vector<int>& nums) {
//         int sum=0,maxsum=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             sum=0;
//             for(int j=i; j<n;j++){
//                 sum += nums[j]; 
//                 maxsum = max(maxsum, abs(sum));
               
//             }
//         }

//         return maxsum;
//     }
// };

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0, min_sum = 0, current_max = 0, current_min = 0;

        for (int num : nums) {
            current_max = max(num, current_max + num);
            max_sum = max(max_sum, current_max);

            current_min = min(num, current_min + num);
            min_sum = min(min_sum, current_min);
        }

        return max(max_sum, abs(min_sum));
    }
};
