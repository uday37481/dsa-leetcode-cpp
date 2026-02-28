class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        
        int left = 0;                      // Start pointer
        int right = numbers.size() - 1;    // End pointer
        
        while (left < right)               // Continue until pointers meet 
        {             
            
            int sum = numbers[left] + numbers[right];  // Current sum
            
            if (sum == target) 
            {
                return {left + 1, right + 1};  // Return 1-based indices
            } 
            
            else if (sum < target) 
            {
                left++;    // Increase sum by moving left pointer
            }
             
            else 
            {
                right--;   // Decrease sum by moving right pointer
            }
        }
        
        return {};  // Return empty if no solution found
    }
};