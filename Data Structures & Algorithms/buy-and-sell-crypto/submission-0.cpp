class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxP = 0;
       int buy = prices[0];

       for (int& sell: prices) {
        maxP = max(maxP, sell - buy);
        buy = min(sell, buy);
       }

       return maxP;
    }
};
