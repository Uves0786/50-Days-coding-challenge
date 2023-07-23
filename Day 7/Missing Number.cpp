
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int k=nums.size(),h;
        for(int i=0;i<=k;i++)
        {
            if ( find(nums.begin(), nums.end(), i) != nums.end() )
            {
                continue;
            }
            else
            {
                h=i;
            }
        }
        return h;
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