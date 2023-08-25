#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& arr,int n)
    {
        int price = INT_MAX,mz=0;
        for(int i=0; i<n; i++)
        {
            price=min(price,arr[i]);
            mz=max(mz,arr[i]-price);
        }
      return mz; 
    }
};
    int main()
    {
        int n;
        vector<int>arr;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        cout<<ob.maxProfit(arr,n)<<endl;
    }

