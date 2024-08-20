#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    long long Max = nums[0];
    for (int i = 0; i < n; i++)
    {
        long long sum = nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (sum < 0)
                sum = 0;
            sum = sum : sum + nums[j];
            Max = max(Max, sum);
        }
    }
    return Max;
}
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums);
    return 0;
}