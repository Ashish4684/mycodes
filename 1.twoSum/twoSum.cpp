#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {

        int req = target - nums[i];
        if (mpp[req] >= 1)
        {
            ans.push_back(req);
            ans.push_back(nums[i]);
        }
        mpp[nums[i]]++;
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