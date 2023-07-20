#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s)
    {
        int l=0,count=0,r=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
            else
            {
                l++;
            }
            if(r==l)
            {
                count++;
                r=0;
                l=0;
            }
        }
        return count;
    }
};
int main()
{
    string s;
    cin >> s;
    solution obj;
    cout << obj.balancedStringSplit(s);
}