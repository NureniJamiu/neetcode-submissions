class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return " ";

        // loop through every item in the list
        for (int i = 0; i < strs[0].size(); i++) {
            // save current character
            char currentChar = strs[0][i];

            // check the char against the first characters of every item in the list
            for(int j = 1; j < strs.size(); j++) {
                // if characters don’t match and if index exceeds string length
                if(i >= strs[j].size() || strs[j][i] != currentChar) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

