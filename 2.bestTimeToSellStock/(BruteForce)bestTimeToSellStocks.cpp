#include <bits/stdc++.h>

using namespace std;
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int profit = prices[j] - prices[i];
            ans = ans > profit ? ans : profit;
        }
    }
    return ans;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 4};
    int ans1 = maxProfit(prices);
    cout << "profit : " << ans1;
    return 0;
}