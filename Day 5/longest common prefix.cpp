#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        int n =strs.size();
        string ans; 
        sort(strs.begin(), strs.end());
        for(auto it:strs)
        {
            cout << it << endl;
        }
        string a = strs[0];
        string b = strs[n-1];
        // cout << a << " " << b;
        for(int i =0; i< a.size(); i++){
            if(a[i] == b[i]){
                ans += a[i];
            }else break;
        }
        return ans;
    }
};
int main()
{
    vector<string> strs;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin >> x;
        str.push_back(x);
         Solution obj;

        cout << obj.longestCommonPrefix(strs) << endl;
    }
}