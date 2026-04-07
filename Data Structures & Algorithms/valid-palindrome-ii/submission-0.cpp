#include <cctype>

class Solution {
public:
    bool validPalindrome(string s) {
        string text = formatString(s);
        int l = 0, r = text.size() - 1;

        while (l < r) {
            if (text[l] != text[r]) {
                return isPalindrome(text.substr(0, l) + text.substr(l + 1)) || 
                        isPalindrome(text.substr(0, r) + text.substr(r + 1));
            }
            l++;
            r--;
        }
        return true;
    }

private:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
        
    }

    string formatString (string s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) {
                result += tolower(c);
            }
        }
        return result;
    }
};
