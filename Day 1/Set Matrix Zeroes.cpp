#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<vector<int>> copy;

        for(int i = 0; i < m.size(); i++)
        {
            vector<int> tmp;
            for(int j = 0; j < m[0].size(); j++)
                tmp.push_back(m[i][j]);

            copy.push_back(tmp);
        }


        for(int i = 0; i < m.size(); i++)
        {
            for(int j = 0; j < m[0].size(); j++)
            {
                if(copy[i][j] == 0)
                {
                    
                    int col = j;
                    int row = i;
                    for(int k = 0; k < m.size(); k++)
                    {
                        m[k][col] = 0;
                    }

                    for(int k = 0; k < m[0].size(); k++)
                    {
                        m[row][k] = 0;
                    }
                }
            }
                
        }
        for (int i = 0; i <m.size(); i++)
        {
            for (int j = 0; j<m[0].size(); j++)
            {
                cout << m[i][j] << " ";
            }
            
        }
        cout << endl;
        
    }
    
};
 
    int main()
    {
        int n;
        vector<vector<int>>m;
        cin >> n;
        for(int i=0;i<n;i++)
        {
           for (int j = 0; j <n; j++)
           {
               int temp;
              cin >> temp;
              m.push_back(temp);
           }
           
        }
        Solution ob;
        ob.setZeroes(m);
    }
