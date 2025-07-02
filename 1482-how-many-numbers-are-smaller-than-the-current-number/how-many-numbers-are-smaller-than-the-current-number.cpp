class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n = nums.size();  
        vector<int> result(n);  // Create a result vector of same size initialized to 0

        
        for (int i = 0; i < n; i++) 
        {
            int cnt = 0;  // Counter to count numbers smaller than nums[i]

            for (int j = 0; j < n; j++)  // Compare nums[i] with every other no 
            {
                if (nums[j] < nums[i])  // If nums[j] is smaller than nums[i]
                {
                    cnt++;  
                }
            }

            result[i] = cnt;  // Store the count at the corresponding index in result
        }

        return result;  // return final result vector
    }
};
