class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        int rem=0;
        while(columnNumber>0){
            columnNumber--;
            rem= columnNumber%26;
            char ch= rem + 'A';
            result.push_back(ch);
            columnNumber=columnNumber/26;
        }

        reverse(begin(result), end(result));
        return result;
    }
};