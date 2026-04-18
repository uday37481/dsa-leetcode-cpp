// Best Time to Buy and Sell Stock

#include <vector>
#include <algorithm>

class Solution 
{
public:
    int maxProfit(std::vector<int>& prices) 
    {
        int minPrice = INT_MAX; 
        int maxProfit = 0; 

        for (int price : prices) 
        {
            // Update the minimum price if the current price is lower
            minPrice = std::min(minPrice, price);

            // Calculate the profit if selling at the current price
            int profit = price - minPrice;
            
            // Update the maximum profit if the current profit is higher
            maxProfit = std::max(maxProfit, profit);
        }

        // Return the maximum profit found
        return maxProfit;
    }
};
