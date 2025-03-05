class Solution {
public:
    int hammingWeight(int n) {
        vector <int> arr;
        int count=0;
        if(n==0) return 0;
        for(int i=0;n>0;i++){
            arr.push_back(n%2);
            n=n/2;
        }

        for(int i=0;i<arr.size();i++){
            if(arr[i]==1) count++;
        }

        return count;
    }
};