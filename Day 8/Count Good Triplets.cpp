#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for(int i = 0;i<arr.size();i++)
        {
            for(int j =i+1;j<arr.size();j++)
            {
                for(int k=j+1;k<arr.size();k++)
                {
                    if( abs(arr[i]-arr[j]) <= a && abs(arr[j]-arr[k]) <= b && abs(arr[i]-arr[k]) <= c ) count++;
                }
            }
        }
        return count;
    }
};
int main()
{
    int n,a,b,c;
    cin>> n;
    cin >> a >> b >> c;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}