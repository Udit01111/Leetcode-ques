class Solution {
public:
void fillsieve( vector <bool> & sieve){
    int n=sieve.size()-1;
    for(int i=2; i<=sqrt(n);i++){
        for(int j= i*2;j<n;j+=i){
            sieve[j]=0;
        }
        }
}
    int countPrimes(int n) {
        vector <bool> sieve(n+1,1);
        int count =0;
        fillsieve(sieve);
        sieve[0]=0;
        sieve[1]=0;
        for(int i=2; i<n;i++){
            if(sieve[i]==1) count++;
        }
        

        return count;
    }
};