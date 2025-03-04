class Solution {
public:
    bool checkPowersOfThree(int n) {
      
        int m=0;
        int sum=0;
        int num=n;
        int i=0;
        while(n){
            m=n%3;
            if(m==2) return false;
            n=n/3;
            sum+= m*pow(3,i);
            i++;
        }

        if(sum==num){
            return true;
        }

        return false;
    }
};