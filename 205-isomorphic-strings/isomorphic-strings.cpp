class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        if (s.length() != t.length()) 
        return false;

        int lastSeenS[256] = {0};  // To store last positions of s
        int lastSeenT[256] = {0};  // To store last positions of t

        for (int i = 0; i < s.length(); i++) 
        {
            // characters were seen at different positions before, not isomorphic
            if (lastSeenS[s[i]] != lastSeenT[t[i]])
            return false;

            // Mark the position
            lastSeenS[s[i]] = i + 1;
            lastSeenT[t[i]] = i + 1;
        }

        return true;
    }
};
