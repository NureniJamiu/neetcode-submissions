class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int currMax = 1, currMin = 1;

        for (int& num : nums) {
            int temp = currMax * num;
            currMax = max(max(num * currMax, num *currMin), num);
            currMin = min(min(temp, num * currMin), num);
            maxProd = max(maxProd, currMax);
        }
        return maxProd;

    }
};
