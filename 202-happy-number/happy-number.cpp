class Solution 
{
public:
    // Helper function to compute the sum of squares of digits
    int getSumOfSquares(int n) 
    {
        int sum = 0;
        while (n > 0) 
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) 
    {
        int slow = n;
        int fast = getSumOfSquares(n);

        while (fast != 1 && slow != fast) 
        {
            slow = getSumOfSquares(slow);
            fast = getSumOfSquares(getSumOfSquares(fast));
        }

        return fast == 1;
    }
};
