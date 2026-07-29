class Solution 
{
public:
    int hIndex(vector<int>& citations) 
    {
        int n = citations.size();

        // Frequency array to count papers with each citation count
        vector<int> arr(n + 1, 0);

        // Store citation counts
        // If citation > n, store it in arr[n]
        for (int c : citations) 
        {
            if (c > n)
            arr[n]++;
            
            else
            arr[c]++;
        }

        int cnt = 0;

        // Traverse from highest citation count to lowest
        for (int i = n; i >= 0; i--) 
        {
            // Count papers having at least i citations
            cnt += arr[i];

            // If count >= i, then i is the H-Index
            if (cnt >= i)
                return i;
        }

        return 0;
    }
};
