class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m=haystack.size();
        int count=1;
        if(n>m)
        return -1;
        

        for(int i =0 ;i<=m-n ;i++){
           if(haystack.substr(i,n)==needle){
            return i;
           }
        }
    return -1;
    }  
};