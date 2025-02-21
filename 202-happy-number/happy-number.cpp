class Solution {
public:
   int sumOfSquares(int n){
        int rem=0;
        int sum=0;
        while(n){
            rem=n%10;
            sum += rem*rem;
            n=n/10;
        }
         return sum;

    }
    bool isHappy(int n) {
      int slow =n, fast=n;
       do {
            slow = sumOfSquares(slow);      
            fast= sumOfSquares(sumOfSquares(fast));
        } while (slow != fast);

        return slow == 1;  
    }
};