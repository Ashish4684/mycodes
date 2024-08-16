#include <bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int find = target - nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] == find)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> ans1 = {2, 7, 11, 28, 15};
    vector<int> ans2 = twoSum(ans1, 30);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }

    return 0;
}