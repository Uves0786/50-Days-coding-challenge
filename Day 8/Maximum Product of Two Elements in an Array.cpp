#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        int j=nums.size()-2;
        int mx=((nums[i]-1)*(nums[j]-1));
        return mx;
    }
};
int main()
{
    int n;
    cin>> n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
}