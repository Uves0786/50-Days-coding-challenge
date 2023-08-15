
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,k,count=0;
        cin >> n >> k;
        vector<int>v1;
        for (int i = 0; i < n; ++i)
        {
           int x;
           cin >> x;
           v1.push_back(x);
        }
        for (int i = 0; i <v1.size(); ++i)
        {
           if (v1[i]%2==0)
           {
               count++;
           }
        }
       if(k>count)
	        cout << "NO\n";
	    else if(k==0 && count==n)
	        cout << "NO\n";
	    else
	        cout << "YES\n";
    }
}

