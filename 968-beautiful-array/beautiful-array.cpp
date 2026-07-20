class Solution 
{
public:
    vector<int> beautifulArray(int n) 
    {
        // Start with the smallest beautiful array
        vector<int> ans;
        ans.push_back(1);

        // Keep expanding until we have enough numbers
        while (ans.size() < n) 
        {
            vector<int> temp;

            // First, generate all odd numbers
            // New value = 2*x - 1
            for (int x : ans) 
            {
                if (2 * x - 1 <= n) 
                {
                    temp.push_back(2 * x - 1);
                }
            }

            // Then, generate all even numbers
            // New value = 2*x
            for (int x : ans) 
            {
                if (2 * x <= n) 
                {
                    temp.push_back(2 * x);
                }
            }

            // Update the answer
            ans = temp;
        }

        return ans;
    }
};