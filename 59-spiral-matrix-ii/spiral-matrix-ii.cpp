class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
        vector <vector<int>> res(n,vector<int>(n));

        int minr = 0;
        int maxr= n-1;

        int minc=0;
        int maxc=n-1;

        int count= 1;
        int p=n*n;

        while(minr <= maxr && minc<=maxc){
            for(int i=minc ; i<=maxc && count<=p ;i++){
                res[minr][i]=count; 
                count++;              //right
            }
            minr++;

            for(int i=minr ; i<=maxr && count<=p ;i++){
                res[i][maxc]=count;
                count++;              //down
            }
            maxc--;

            for(int i=maxc ; i>=minc && count<=p ;i--){               //left
                res[maxr][i]=count;
                count++;   
            }
            maxr--;

            for(int i=maxr ; i>=minr && count<=p ;i--){           //top
                res[i][minc]=count;
                count++;   
            }
            minc++;

        }

        return res;
    }
};