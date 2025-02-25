class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        //  const int MOD = 1e9 + 7;
        // int n= arr.size();
        // int sum=0;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=arr[j];
        //         if(sum%2!=0){
        //             count = (count + 1) % MOD;
        //         }
        //     }
        // }
        // return count;
        const int MOD = 1e9 + 7;
        int oddCount = 0, evenCount = 1; // evenCount starts with 1 for prefix sum 0
        int prefixSum = 0, result = 0;

        for (int num : arr) {
            prefixSum += num;
            
            if (prefixSum % 2 == 0) { // Even prefix sum
                result = (result + oddCount) % MOD;
                evenCount++;
            } else { // Odd prefix sum
                result = (result + evenCount) % MOD;
                oddCount++;
            }
        }
        return result;
    }
};