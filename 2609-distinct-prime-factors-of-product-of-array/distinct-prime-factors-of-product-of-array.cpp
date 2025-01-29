class Solution {
public:
   
    void fillsieve (vector <bool> & sieve){
        int n =sieve.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){
                sieve[j]=0;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int mx=-1;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
        }

        vector <bool> sieve(mx+1,1);
        if(mx+1>0) sieve[0]=0;
        if(mx+1>1) sieve[1]=0;
        fillsieve(sieve);

        vector <int> prime;
        for(int i=2 ;i<sieve.size();i++){
            if(sieve[i]==1) prime.push_back(i);
        }

        vector <bool> taken (prime.size(),0);

        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            for(int j=0;j<prime.size();j++){
                if(prime[j]>ele) break;
                if(ele% prime[j]==0) taken[j]=1;
            }
        }
        int count =0;
        for(int j=0;j<taken.size();j++){
                if(taken[j]==1) count++;
         }

        return count;
    

    }
};