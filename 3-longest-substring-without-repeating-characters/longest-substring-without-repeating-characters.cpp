class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        
        int left = 0;                 // Start of window
        int maxLength = 0;            // Store maximum length
        unordered_set<char> st;       // Store current characters
        
        for (int right = 0; right < s.length(); right++) 
        {
            
            // If duplicate found, shrink window from left
            while (st.find(s[right]) != st.end()) 
            {
                st.erase(s[left]);    // Remove left character
                left++;               // Move left pointer
            }
            
            st.insert(s[right]);      // Add current character
            maxLength = max(maxLength, right - left + 1); // Update max
        }
        
        return maxLength;
    }
};