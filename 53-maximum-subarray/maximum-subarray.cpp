class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0]; //max sum possible

        int curr_max = nums[0]; //store max at a pos

        for (int i=1; i <nums.size(); i++) //Kadane's algorithm
        {
          curr_max = max(nums[i], nums[i] + curr_max);
        
          max_so_far = max(curr_max, max_so_far) ;
        }

        return max_so_far ;
    }
};