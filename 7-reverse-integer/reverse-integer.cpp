class Solution {
public:
    int reverse(int x) {
         long rev = 0;  // Use long to handle overflow

        while (x != 0) {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }

        // Check for overflow
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        return (rev);
    }
};