class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        bool isHold = false;
        int buyPrice;
        int profit = 0;
        if (prices.size() == 0)
            return profit;
        for (int i = 0; i < prices.size() - 1; ++i)
        {
            if (prices[i] < prices[i + 1] && !isHold)
            {
                buyPrice = prices[i];
                isHold = true;
            }
            else if (prices[i] > prices[i + 1] && isHold)
            {
                profit += prices[i] - buyPrice;
                isHold = false;
            }
        }
        if (isHold)
        {
            profit += prices[prices.size() - 1] - buyPrice;
        }
        return profit;
    }
};