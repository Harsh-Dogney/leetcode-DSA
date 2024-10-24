class Solution {
public:
    string intToRoman(int num) {
        // Corrected array declarations
        int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string str = ""; // Empty string initialization
        int i = 0; // Index variable to iterate over the arrays
        
        // Loop to convert the integer to Roman numeral
        while (num > 0) {
            if (num >= n[i]) {
                str += s[i];  // Append the Roman numeral symbol
                num -= n[i];  // Subtract the corresponding value from num
            } else {
                i++; // Move to the next smaller value
            }
        }

        return str;   
    }
};
