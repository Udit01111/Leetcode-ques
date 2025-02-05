class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int prev=0;
        int curr=0;
        int next=0;
        if (n == 1) return 0;  // Only one element, it's the peak
        if (nums[0] > nums[1]) return 0;  // First element is greater than the second
        if (nums[n - 1] > nums[n - 2]) return n - 1; 
        
        for(int i=1;i<n;++i){
            curr=i;
            prev=i-1;
            next=i+1;
            if(nums[curr]>nums[prev] && nums[curr]>nums[next]) return curr ;
                   
        }
        return 0;
    }
};