class Solution {
public:
    string addStrings(string num1, string num2) {
        int i= num1.size()-1;
        int j= num2.size()-1;
        int carry=0;
        vector <int> res;
        while(i>=0 || j>=0 || carry){
            if(i>=0) carry += num1[i--] - '0';
            if(j>=0) carry += num2[j--] -'0';

            res.push_back(carry%10 + '0');
            carry=carry/10;
        }

        return string(res.rbegin(),res.rend()) ;
    }
};