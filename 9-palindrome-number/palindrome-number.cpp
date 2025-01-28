class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0, num=0;
        long rnum=0;
        int temp=x;

        if(x<0){
            return false;
        }
        while(x){
            rem=x%10;
            num= x/10;
            x=num;
            rnum= (rnum*10)+ rem;
        }

        if(rnum == temp){
            return true;}

        else{return false;}
    }
};