class Solution 
{
  public:
    string longestPalindrome(string s) 
    {
        int st = 0, max = 1;
        int n = s.length();
        
        for (int i = 0; i < n; i++) 
        {
            // Check for odd length palindromes
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) 
            {
                if (right - left + 1 > max) 
                {
                    st = left;
                    max = right - left + 1;
                }
                left--;
                right++;
            }
            
            // Check for even length palindromes
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) 
            {
                if (right - left + 1 > max) 
                {
                    st = left;
                    max = right - left + 1;
                }
                left--;
                right++;
            }
        }
        
        return s.substr(st, max);
    }
};
