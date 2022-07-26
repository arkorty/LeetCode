class Solution {
  public:
    int maxProfit(std::vector<int> &prices) {
        int prof = 0;
        for (int i = prices.size() - 1, max = 0; i >= 0; --i) {
            if (prices[i] > max)
                max = prices[i];
            else if (max - prices[i] > prof)
                prof = max - prices[i];
        }

        return prof;
    }
};
