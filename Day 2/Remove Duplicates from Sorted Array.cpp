#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int x = 1; 
        for(int i = 1 ;i < nums.size(); i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[x] = nums[i];
                x++;
            }
        }
        return x;
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
        cout<<ob.removeDuplicates(nums)<<endl;
    }