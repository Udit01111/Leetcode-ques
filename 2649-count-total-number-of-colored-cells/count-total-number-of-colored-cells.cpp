class Solution {
public:
    long long coloredCells(int n) {
    
        long long sum=1;
        while(n){
            sum += 4*(n-1);
            n--;
        }
        return sum;
    }
};