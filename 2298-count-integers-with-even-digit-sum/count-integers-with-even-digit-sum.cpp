class Solution {
public:
    int digitsum(int n){
        int sum=0;
        int rem=0;
        while(n){
            rem=n%10;
            sum+=rem;
            n=n/10;
        }

        return sum;
    }

    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(digitsum(i)% 2==0){
                count++;
            }
        }

        return count;
    }
};