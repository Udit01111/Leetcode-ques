class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long n= candies.size();
        sort(candies.begin(),candies.end());

        int left=1;
        int right= *max_element(candies.begin(),candies.end());
        int best=0;
       

        while(left<=right){
            int mid= left + (right -left)/2;
            long long count=0;
                for(int i=0;i<n;i++){
                    count += candies[i]/mid;
                }

                if(count>=k){
                    best = mid;
                    left =mid+1;

                } 

                else {right= mid-1;}
            }

            return best;
      
    }
};