class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        // Initially assume first element is the majority candidate
        int cnt = 1;
        int res = nums[0];

        // Traverse the array from the second element
        for (int i = 1; i < nums.size(); i++) 
        {
            // If count becomes 0, choose the current element as new candidate
            if (cnt == 0) 
            {
                res = nums[i];
            }

            // If current element matches the candidate, increase count
            if (res == nums[i]) 
            {
                cnt++;
            }
            // Otherwise decrease count
            else 
            {
                cnt--;
            }
        }

        // Return the majority element
        return res;
    }
};