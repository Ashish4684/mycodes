#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i = j)
            {
                continue;
            }
            product *= nums[j];
        }
        cout << " " << product;
        ans.push_back(product);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 6, 7, 8, 89};
    nums = productExceptSelf(nums);

    return 0;
}