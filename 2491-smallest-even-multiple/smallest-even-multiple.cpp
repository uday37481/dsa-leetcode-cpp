class Solution {
public:
    int smallestEvenMultiple(int n) 
    {
        if (n % 2 == 0)
        return n;          //n is even

        else
        return n * 2;     //n is odd
    }
};
