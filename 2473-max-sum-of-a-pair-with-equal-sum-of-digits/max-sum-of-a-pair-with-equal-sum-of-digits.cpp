class Solution {
public:

int digits(int n){
    int sum=0;
    int rem=0;
    while(n){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}
    int maximumSum(vector<int>& nums) {

        unordered_map<int, int> mp; // Map of digit sum → max num with that sum
        int max_sum = -1;

        for (int num : nums) {
            int sum_digits = digits(num);
            
            if (mp.count(sum_digits)) { 
                max_sum = max(max_sum, mp[sum_digits] + num); // Update max sum
                mp[sum_digits] = max(mp[sum_digits], num); // Store max value
            } else {
                mp[sum_digits] = num; // First occurrence of this digit sum
            }
        }

        return max_sum;
    }
};