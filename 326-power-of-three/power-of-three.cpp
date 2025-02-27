class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
    double log_val = log10(n) / log10(3);
    return floor(log_val) == log_val; 
    }
};