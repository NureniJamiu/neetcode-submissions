#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        string text = formatString(s);
        int l = 0, r = text.size() - 1;

        while(l < r) {
            if (text[l++] != text[r--]) return false;
        }
        return true;
        
    }

private:
    string formatString (string s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) {
                result += tolower(c);
            }
        }
        cout << result; 
        return result;
    }
};
