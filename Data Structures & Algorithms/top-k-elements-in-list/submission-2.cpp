class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Initialize a bucket of size nums+1
        // Store arrays by their frequency
        // Loop backward
        unordered_map<int, int>freq;
        for (const auto& num: nums) {
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& pair : freq) {
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> res;
        for (int i = bucket.size() - 1; i > 0; i--) {
            if (bucket[i].size() != 0) {
                for (int n: bucket[i]) {
                    res.push_back(n);
                    if (res.size() == k) {
                        return res;
                    }
                }
            }
        }

        return res;
    }
};
