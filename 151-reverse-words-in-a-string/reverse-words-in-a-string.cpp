class Solution {
public:
    string reverseWords(string s) 
    {
        int i = s.length() - 1;
        string ans = "";

        // Start from the end of the string
        while (i >= 0) 
        {    
            // Skip extra spaces
            while (i >= 0 && s[i] == ' ') 
            {
                i--;
            }

            // If we reached the beginning, stop
            if (i < 0) 
            {
                break;
            }

            // Mark the end of the current word
            int end = i;

            // Move left until we find a space
            while (i >= 0 && s[i] != ' ') 
            {
                i--;
            }

            // Add a space before the next word
            if (ans.length() > 0) 
            {
                ans += " ";
            }

            // Extract the word
            string word = s.substr(i + 1, end - i);

            // Add the word to the answer
            ans += word;
        }

        return ans;   
    }
};
