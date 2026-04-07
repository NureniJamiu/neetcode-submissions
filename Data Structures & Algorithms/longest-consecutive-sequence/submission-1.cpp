class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int count = 1;
        int maxim = INT_MIN;

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue;
            if (nums[i] != nums[i-1] + 1) {
                maxim = max(maxim, count);
                count = 1;
                continue;
            }
            count++;
        }
        maxim = max(maxim, count);

        return maxim;
    }
};
