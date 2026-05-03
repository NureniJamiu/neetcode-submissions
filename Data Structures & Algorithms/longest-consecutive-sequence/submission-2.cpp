class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longest = 0;

        for (int& num : nums) {
            st.insert(num);
        }

        for (int i = 0; i < nums.size(); i++) {
            // check if nums[i] is the beginning of a sequence.
            if (!st.count(nums[i] - 1)) {
                int length = 1;
                while (st.count(nums[i] + length)) {
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};
