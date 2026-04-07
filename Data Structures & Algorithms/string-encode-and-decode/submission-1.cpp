class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString;
        for (const auto& str: strs) {
            encodedString += to_string(str.size()) + "#" + str;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> decodedString;

        int i = 0;
        while (i < s.size()) {
            size_t found = s.find('#', i);
            int count = stoi(s.substr(i, found - i));
            int start = found + 1;
            decodedString.push_back(s.substr(start, count));
            i = start + count;
        }

        return decodedString;
    }
};
