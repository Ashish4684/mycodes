#include <bits/stdc++.h>

using namespace std;
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int preMin = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int profit = prices[i] - preMin;
        maxProfit = maxProfit > profit ? maxProfit : profit;
        preMin = preMin < prices[i] ? preMin : prices[i];
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 4};
    int ans1 = maxProfit(prices);
    cout << "profit : " << ans1;
    return 0;
}