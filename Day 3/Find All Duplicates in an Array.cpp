#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int>v1;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i++)
      {
         if(nums[i]==nums[i+1])
         {
             v1.push_back(nums[i]);
         }
      }
        return v1;
    }
};
  int main()
    {
        int n;
        vector<int>nums;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        Solution ob;
        cout<<ob. findDuplicates(nums)<<endl;
    }