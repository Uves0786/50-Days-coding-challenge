#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int area=0;
        int right=height.size()-1;
        int left=0;
        while(left<right)
        {
            int rh=height[right];
            int lh=height[left];
            int mi=min(lh,rh);
            int len=(right-left);
            int maxarea=mi*len;
            area=max(area,maxarea);
            if(lh<rh)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return area;
    }
};
 int main()
    {
        int n;
        vector<int>height;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            height.push_back(x);
        }
        Solution ob;
        cout<<ob.maxArea(height)<<endl;
    }