class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // Take the first string as the initial prefix.
        string prefix = strs[0];

        // Compare the prefix with every other string.
        for (int i = 1; i < strs.size(); i++) {

            // Keep removing the last character until it matches.
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
            }
        }

        // Return the common prefix.
        return prefix;
    }
};
