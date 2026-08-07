class Solution {
public:
    string intToRoman(int num) {

        // This string will store the final Roman numeral.
        string roman = "";

        // Roman numeral symbols in descending order.
        vector<string> notations = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        // Corresponding integer values.
        vector<int> value = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        // Traverse both arrays from largest value to smallest.
        for (int pos = 0; num > 0; pos++) 
        {

            // Keep adding the Roman symbol
            // while the current value can be subtracted.
            while (num >= value[pos]) 
            {
                // Append the Roman symbol.
                roman += notations[pos];

                // Reduce the number.
                num -= value[pos];
            }
        }

        // Return the final Roman numeral.
        return roman;
    }
};
