class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char c;
        for(int i=0 ;i< s.length()&& t.length(); i++){
            if(s[i]!=t[i]){
               c=t[i];
               break;
            }
        }

        return c;
    }
};