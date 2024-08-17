#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(product);
        product *= nums[i];
    }
    product = 1;
    for (int i = n - 1; i >= 0; i++)
    {
        int next = ans[i];
        ans[i] = ans[i] * product;
        product *= next;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 6, 7, 8, 89};
    nums = productExceptSelf(nums);

    return 0;
}