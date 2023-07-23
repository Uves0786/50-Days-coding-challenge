#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int>v1;
        int k;
        for(int i=0;i<nums.size();i++)
        {
            k=pow(nums[i],2);
            v1.push_back(k);
        }
        sort(v1.begin(),v1.end());
        return v1;
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