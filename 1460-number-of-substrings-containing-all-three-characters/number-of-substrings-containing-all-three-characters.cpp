class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3] = {0, 0, 0}; // To store the frequency of 'a', 'b', 'c'
        int left = 0, result = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            count[s[right] - 'a']++; // Increment count of current character
            
            // Shrink the window until it contains at least one of each character
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                result += s.length() - right; // All substrings starting from 'left' to 'right' are valid
                count[s[left] - 'a']--; // Move left pointer
                left++;
            }
        }
        
        return result;
    }
};
