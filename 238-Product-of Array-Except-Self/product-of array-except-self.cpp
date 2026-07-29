class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();

        // Result array (initialized with 1)
        vector<int> ans(n, 1);

        // Store product of all elements to the left
        int leftProduct = 1;
        for (int i = 0; i < n; i++) 
        {
            ans[i] = leftProduct;
            leftProduct *= nums[i];
        }

        // Multiply with product of all elements to the right
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) 
        {
            ans[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        // Final answer
        return ans;
    }
};
