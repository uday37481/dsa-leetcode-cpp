class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> result(2 * n);  // Create a result array with fixed size

        int index = 0;
        
        for (int i = 0; i < n; i++) 
        {
            result[index] = nums[i];       // x_i
            result[index + 1] = nums[i + n]; // y_i
            index = index + 2;  // Move to next pair of positions
        }

        return result;
    }
};
