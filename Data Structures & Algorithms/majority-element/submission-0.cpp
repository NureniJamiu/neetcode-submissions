class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, currMajorElem = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (count < 1) {
                currMajorElem = nums[i];
                count++;
                continue;
            }
            if (nums[i] == currMajorElem) {
                count++;
            } else {
                count--;
            }
        }
        return currMajorElem;
    }
};