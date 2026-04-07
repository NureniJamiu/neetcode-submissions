class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m1 = 0, m2 = 0;
        int c1 = 0, c2 = 0;

        // phase 1 : find potential candidates

        for (int num: nums) {
            if (num == m1) c1++;
            else if (num == m2) c2++;
            else if (c1 == 0) {
                m1 = num;
                c1++;
            }
            else if (c2 == 0) {
                m2 = num;
                c2++;
            }
            else {
                c1--; c2--;
                if (c1 == 0) m1 = 0;
                if (c2 == 0) m2 = 0;
            }
        }

        // phase 2: verify the candidates
        c1 = 0;
        c2 = 0;

        for (int num: nums) {
            if (num == m1) c1++;
            else if (num == m2) c2++;
        }

        vector<int> result;
        int n = nums.size();

        if (c1 > n/3) result.push_back(m1);
        if (c2 > n/3) result.push_back(m2);

        return result;
    }
};