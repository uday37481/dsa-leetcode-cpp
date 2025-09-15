class Solution 
{
public:
    int minMaxGame(vector<int>& nums) 
    {
        // Keep reducing the array until only 1 no. is left
        while (nums.size() > 1) 
        {
            
            // New array will have half the size
            vector<int> newNums(nums.size() / 2);
            
            // Fill newNums using the rules
            for (int i = 0; i < newNums.size(); i++) 
            {
                // If index is even → take min
                if (i % 2 == 0) 
                {
                    newNums[i] = min(nums[2 * i], nums[2 * i + 1]);
                } 
                // If index is odd → take max
                else 
                {
                    newNums[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            
            // Replace nums with the new array
            nums = newNums;
        }
        
        // Only 1 element left, return it
        return nums[0];
    }
};
