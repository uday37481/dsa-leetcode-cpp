class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry = 1;  // because we want to add 1

        // start from last digit
        for (int i = digits.size() - 1; i >= 0; i--) {

            int sum = digits[i] + carry;

            digits[i] = sum % 10;   // keep last digit
            carry = sum / 10;       // carry (0 or 1)

            // if no carry left, we can stop
            if (carry == 0)
                break;
        }

        // if carry is still left, add it at the front
        if (carry == 1)
            digits.insert(digits.begin(), 1);

        return digits;
    }
};
