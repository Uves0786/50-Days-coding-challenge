
#include <bits/stdc++.h> 
using namespace std;
string reverseString(string s, int m, vector<int> &a) 
{
   int k=s.size();
   for(int i=0;i<m;i++){
       int postion1=a[i];
       int postion2=k-a[i]-1;
        while (postion1 < postion2) {
         swap(s[postion1], s[postion2]);
         postion1++;
         postion2--;
       }

   }
   return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int m;
        cin >> m;
        vector<int>a;
        for(int i=0;i<m;i++)
        {
            int x;
            cin >>x;
            a.push_back(x);
        }
        string ans=reverseString(s, m,a);
        cout << ans << endl;
    }
}