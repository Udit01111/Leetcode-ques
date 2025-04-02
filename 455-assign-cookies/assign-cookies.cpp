class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gn= g.size();
        int sn = s.size();

        sort(g.begin(), g.end());
        
        sort(s.begin(), s.end());

int i=0,j=0;

        while(i<=gn-1 && j<=sn-1){
            if(s[j]>=g[i]){
                i++;
                j++;
            }

            else{
                j++;
            }

        }

        return i;
    }
};