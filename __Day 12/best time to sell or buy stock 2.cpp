class Solution {
public:
    int maxProfit(vector<int>&v1)
    {
        int k=0;
       for(int i=0;i<v1.size()-1;i++)
       {
           if(v1[i+1]>v1[i])
           {
              k+=v1[i+1]-v1[i]; 
           }
       }
        return k;
    }
};