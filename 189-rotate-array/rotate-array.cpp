class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> temp(n);  // Create a new array of same size

        // Store elements in rotated positions
        for (int i = 0; i < n; i++) 
        {
            int newP = (i + k) % n;  // Calculate new index
            temp[newP] = nums[i];
        }

        // Copy back to original array
        for (int i = 0; i < n; i++) 
        {
            nums[i] = temp[i];
        }
    }
};
