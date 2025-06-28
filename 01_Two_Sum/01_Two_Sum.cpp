class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for (int i = 0; i < nums.size(); i++) // traverse each element
        {
            for (int j = i + 1; j < nums.size(); j++) // check elements after i
            {
                if (nums[i] + nums[j] == target) 
                {
                    // Return the indices as a vector
                    return {i, j};
                }
            }
        }
        return {};  // Return empty vector if no pair found
    }
};
