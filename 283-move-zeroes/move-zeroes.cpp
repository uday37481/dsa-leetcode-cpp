class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;   // position to put the next non-zero number

        // Step 1: move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != 0) 
            {
                nums[index] = nums[i];
                index++;
            }
        }

        // Step 2: fill the remaining positions with zero
        while (index < nums.size()) 
        {
            nums[index] = 0;
            index++;
        }
    }
};
