class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = nums2.size() - 1, count = 0;

        for (int i = nums1.size() - 1; i >= 0; i--) {
            if (count != nums2.size() && nums1[i] == 0) {
                nums1[i] = nums2[j--];
                count++;
            }
        }

        sort(nums1.begin(), nums1.end());
    }
};