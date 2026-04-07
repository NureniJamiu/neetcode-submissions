class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int missing = 1;

        if (nums[n - 1] <= 0) return 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == missing) missing++;
            else if (nums[i] > missing) break;
        }

        return missing;
    }
};