#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        vector<int>v1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                v1.push_back(i);
            }
        }
        return v1;
    }
};
int main()
{
    int target,n;
    cin>> n >> target;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
}