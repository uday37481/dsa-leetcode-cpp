class Solution {
public:
    int reverseBits(int n) {
        int result = 0;

        for (int i = 0; i < 32; i++) 
        {
            int lastBit = n & 1;          // get rightmost bit
            result = result << 1;        // shift result left
            result = result | lastBit;   // put bit into result
            n = n >> 1;                  // move to next bit
        }

        return result;
    }
};
