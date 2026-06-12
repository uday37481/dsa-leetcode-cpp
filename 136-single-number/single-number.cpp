class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sing = nums[0]; // to store value of bitwise addition

        for(int i =1; i <nums.size(); i++) //indx 0 already stored in sing
        {
            sing = sing ^ nums[i]; //bitwise operation
        }
        return sing;
    }
};