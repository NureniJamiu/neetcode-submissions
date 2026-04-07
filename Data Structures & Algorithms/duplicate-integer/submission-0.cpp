class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;

        for (int value : nums){
            if (seen[value] > 0) {
                return true;
            }
            seen[value]++;
        }
        return false;
    }
};