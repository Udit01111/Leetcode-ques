class Solution {
public:
    bool canAliceWin(int n) {
       int prev=10;

       bool a= true;
       while(n>=prev){
        n-=prev;
        prev--;
        a=!a;
       }

       return a==false;
    }
};