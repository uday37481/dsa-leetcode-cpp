class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        // l = position where next valid element will be placed
        // r = pointer to traverse the array
        int l = 0, r = 0;

        // Traverse the entire array
        while (r < nums.size()) 
        {
            // Count how many times the current number appears
            int cnt = 1;

            while (r + 1 < nums.size() && nums[r] == nums[r + 1]) 
            {
                r++;
                cnt++;
            }

            // Keep the current number at most 2 times
            for (int i = 0; i < min(2, cnt); i++) 
            {
                nums[l] = nums[r];
                l++;
            }

            // Move to the next different number
            r++;
        }

        // Return the new length of the modified array
        return l;
    }
};