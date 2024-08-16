#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp[nums[i]])
        {
            return true;
        }
        mpp[nums[i]]++;
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    cout << "answer is :  " << containsDuplicate(nums);

    return 0;
}