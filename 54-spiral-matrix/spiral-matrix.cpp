class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();

        vector<int> res;

        int minr = 0;
        int maxr= m-1;

        int minc=0;
        int maxc=n-1;

        int count= 0;
        int p=n*m;

        while(minr <= maxr && minc<=maxc){
            for(int i=minc ; i<=maxc && count<p ;i++){
                res.push_back(matrix[minr][i]); 
                count++;              //right
            }
            minr++;

            for(int i=minr ; i<=maxr && count<p ;i++){
                res.push_back(matrix[i][maxc]);
                count++;              //down
            }
            maxc--;

            for(int i=maxc ; i>=minc && count<p ;i--){               //left
                res.push_back(matrix[maxr][i]);
                count++;   
            }
            maxr--;

            for(int i=maxr ; i>=minr && count<p ;i--){           //top
                res.push_back(matrix[i][minc]);
                count++;   
            }
            minc++;

        }

        return res;
    }
};