class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n= nums.size();
        int incr = 1;
        int decr=1;
        int longest=1;

        for(int i=1;i<n;++i){
            if(nums[i]>nums[i-1]){
                incr++;
            }
            else{incr=1;}

            if(nums[i]<nums[i-1]){
                decr++;
            }
            else{decr=1;}

            longest= max({incr, decr , longest});

        }

        return longest;
    }
};