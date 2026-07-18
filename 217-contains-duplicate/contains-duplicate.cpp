class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Sort the array
        sort(nums.begin(), nums.end());

        // Check neighboring elements
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
};