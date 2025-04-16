class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int n = height.size();
        vector <int> left(n);
        vector <int> right(n);

        left[0]=height[0];
        for(int i=1;i<n;i++){
            left[i]=max(height[i],left[i-1]);
        }

        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(height[i],right[i+1]);
        }

        for(int i=0;i<n;i++){
            // int lmax=0;
            // int rmax=0;
            // for(int j=0;j<=i;j++){
            //     if(height[j]>lmax) lmax= height[j];
            // }
            // for(int j=i;j<=n-1;j++){
            //     if(height[j]>rmax) rmax= height[j];
            // }

            int temp= min(left[i],right[i]) - height[i];
            sum+=temp;
        }

        return sum;
    }
};