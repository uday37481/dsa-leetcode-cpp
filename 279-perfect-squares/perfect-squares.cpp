class Solution {
public:

    bool isSquare(int x) {
        int r = sqrt(x);
        return r * r == x;
    }

    int numSquares(int n) 
    {
        // Case 1: n is a perfect square
        if (isSquare(n)) 
        return 1;

        // Case 2: n = a^2 + b^2
        for (int i = 1; i * i <= n; i++) 
        {
            int rest = n - i * i;
            if (isSquare(rest)) 
            {
                return 2;
            }
        }

        // Case 3: remove factors of 4
        while (n % 4 == 0) 
        {
            n /= 4;
        }

        // if n is of form (8m + 7), answer is 4
        if (n % 8 == 7) return 4;

        // Case 4
        return 3;
    }
};
