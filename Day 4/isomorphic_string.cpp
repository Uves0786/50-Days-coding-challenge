#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
       
        map<char,int>mp;
         map<char,int>ms;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            ms[t[i]]++;
        }
        for(auto f:mp)
        {
           v1.push_back(f.second);
        }
         for(auto fp:ms)
        {
           v2.push_back(fp.second);
        }
        sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
        if(v1==v2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
    int main()
    {
        string s,t;
        cin >> s;
        cin >> t;
        Solution obj;

        cout << obj.isIsomorphic(s,t) << endl;
        return 0;
    }
