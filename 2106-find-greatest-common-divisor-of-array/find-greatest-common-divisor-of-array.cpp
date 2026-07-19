class Solution 
{
public:

    // Function to find GCD using Euclidean Algorithm
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    int findGCD(vector<int>& nums) 
    {
        // Assume first element is both smallest and largest
        int smallest = nums[0];
        int largest = nums[0];

        // Find smallest and largest number
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < smallest)
            {
                smallest = nums[i];
            }

            if (nums[i] > largest)
            {
                largest = nums[i];
            }
        }

        // Return GCD of smallest and largest
        return gcd(smallest, largest);
    }
};