class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = nums.size() - 1; i >= 0; i--){
            if (nums[i] != val) {
                count += 1;
            }else {
                nums.erase(nums.begin() + i);
            }
        }
        return count;
    }
};