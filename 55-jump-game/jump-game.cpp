class Solution 
{
public:
    bool canJump(vector<int>& nums) 
    {

        // Goal is initially the last index
        int goal = nums.size() - 1;

        // Traverse from right to left
        for (int i = nums.size() - 1; i >= 0; i--) 
        {
            // If we can reach the current goal from index i,
            // then make i the new goal.
            if (i + nums[i] >= goal) 
            {
                goal = i;
            }
        }

        // If the goal becomes 0,
        // it means we can reach the end from the first index.
        return goal == 0;
    }
};