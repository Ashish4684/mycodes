#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    vector<int> arr1;
    vector<int> arr2;
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        arr1.push_back(product);
        product *= nums[i];
    }
    product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        arr2.push_back(product);
        product *= nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr1[i] * arr2[i]);
        cout << " " << arr1[i] * arr2[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 6, 7, 8, 89};
    nums = productExceptSelf(nums);

    return 0;
}