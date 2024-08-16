#include <bits/stdc++.h>

using namespace std;
int binarySearch(vector<int> &nums, int target)
{
    int end = nums.size() - 1;
    sort(nums.begin(), nums.end());

    int first = 0;
    while (first < end)
    {
        int mid = (first + end) / 2;
        if (nums[mid] == target)
        {
            return nums[mid];
        }
        else if (nums[mid] < target)
        {
            first = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int req = target - nums[i];
        cout << req << " " << target << " " << nums[i] << endl;
        int ans1 = binarySearch(nums, req);
        if (ans1 != -1)
        {
            return {req, ans1};
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> ans1 = {27, 55, 35, 45, 93};
    vector<int> ans2 = (ans1, 90);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }

    return 0;
}