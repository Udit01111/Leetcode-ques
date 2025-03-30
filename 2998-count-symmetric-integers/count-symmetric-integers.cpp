class Solution {
public:
bool symmetricdigit (int num){
    int rem=0;
    int fsum=0;
    int bsum=0;
    vector <int> number ;
    while(num){
        rem=num%10;
        number.push_back(rem);
        num=num/10;

    }
if(number.size() %2 != 0){
return false;
}

int n =number.size();
 int mid = number.size()/ 2;

         // Sum first half and last half
                 for (int i = 0; i < mid; i++) {
                             fsum += number[mid - 1 - i]; // First half (stored in reverse)
                                         bsum += number[n - 1 - i];   // Second half (stored in reverse)
                                                 }

if(fsum!=bsum){
    return false;
}

return true;

}
    int countSymmetricIntegers(int low, int high) {
        vector <int> count;
        for(int i=low; i<=high;i++){
            if(symmetricdigit(i)) 
            count.push_back(i);
        }

        return count.size();
    }
};