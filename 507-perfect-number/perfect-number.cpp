class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1){
            return false;
        }
        int sum=0;
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
                sum+= (i + num/i);
            }
            
        }

        sum=sum-num;
        if(sum==num){
            return true;
        }
        else{
            return false;
        }
    }
};