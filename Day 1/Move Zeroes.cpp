#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums,int n)
    {
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                 v2.push_back(nums[i]);
            }
        }
        for(int i=0; i<v1.size();i++)
        {
            v2.push_back(v1[i]);
        }
        nums.clear();
         for(int i=0; i<v2.size();i++)
        {
            nums.push_back(v2[i]);
        }
        for(int i=0; i<nums.size();i++)
        {
            cout << nums[i] << " ";
        }
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
        Solution s;
        s.moveZeroes(nums,n);
    }
