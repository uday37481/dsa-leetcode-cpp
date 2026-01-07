class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        string clean = "";

        // Step 1: remove non-alphanumeric and make lowercase
        for (char c : s) 
        {
            if (isalnum(c)) 
            {          // check letter or digit
                clean += tolower(c);   // convert to lowercase
            }
        }

        // Step 2: check palindrome
        int left = 0;
        int right = clean.length() - 1;

        while (left < right) 
        {
            if (clean[left] != clean[right]) 
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
