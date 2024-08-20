#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int Max = nums[0];
    int sum = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (sum < 0)
            sum = 0;
        sum = sum + nums[i];
        Max = max(Max, sum);
    }
    return Max;
}
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums);
    return 0;
}