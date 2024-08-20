#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums, int k)
{
   int n = nums.size();
   unordered_map<int, int> mpp;
   for (int i = 0; i < n; i++)
   {
      if (mpp[nums[i]])
         ;
      {
         return true;
      }
      mpp[nums[i]]++;
      if (i > k)
      {
         mpp[nums[i - k]]--;
      }
   }

   return false;
}
bool containsDuplicate(vector<int> &nums, int k)
{
   int n = nums.size();
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; i <= i + k; i++)
      {
         if (j == n)
         {
            break;
         }
         if (nums[i] == nums[j])
         {
            return true;
         }
      }
   }

   return false;
}

bool containsDuplicate(vector<int> &nums, int k)
{
   int n = nums.size();
   sort(nums.begin(), nums.end());
   for (int i = 0; i < n - 1; i++)
   {
      if (nums[i] == nums[i + 1])
      {
         return true;
      }
   }
   return false;
}