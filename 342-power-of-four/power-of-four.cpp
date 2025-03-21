class Solution {
public:
    bool isPowerOfFour(int n) {
           if (n <= 0) return false;
    double log_val = log10(n) / log10(4);
    return floor(log_val) == log_val; 
    
    }
};