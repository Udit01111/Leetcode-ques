class Solution {
public:
    int hammingDistance(int x, int y) {
       int a = x^y;
       int count=0;
       while(a){
        if(a%2==1){
            count++;
        }
        a=a/2;

       }

       return count; 
    }
};