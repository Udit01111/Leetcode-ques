class Solution {
public:
    string convertToBase7(int num) {
         if (num == 0) return "0"; // Edge case for zero

             bool isNegative = (num < 0);
                 num = abs(num); // Work with positive number for conversion

                     string result = "";
                         while (num > 0) {
                                 result = to_string(num % 7) + result; // Append remainder at the front
                                         num /= 7;
                                             }

                                                 if (isNegative) result = "-" + result;
                                                   return result;
    }
};