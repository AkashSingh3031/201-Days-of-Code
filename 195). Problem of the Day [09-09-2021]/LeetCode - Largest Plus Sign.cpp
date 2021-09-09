#include<bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int orderOfLargestPlusSign(int N, vector<vector<int>>& mines) 
    {
        int ans=0,s,i,j,k;
        
        // v[N][N] for showing 0 and 1 position and dp[][][] for getting largest value 
        int dp[N+2][N+2][4],v[N][N]; 
        
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
                v[i][j]=1;
        
        for(i=0;i<mines.size();i++)
            v[mines[i][0]][mines[i][1]]=0;
        
        memset(dp,0,sizeof dp);
        
		//first we store largest value from top left to bottom right
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(v[i][j]==1)
                {
                    //dp[][][0] for store largest value from upper side
                    dp[i+1][j+1][0]=dp[i][j+1][0]+1;  
                    
                    //dp[][][1] for store largest value from left side
                    dp[i+1][j+1][1]=dp[i+1][j][1]+1; 
                }
            }
        }
        
		// we store largest value from bottom right to top left
        for(i=N-1;i>=0;i--)
        {
            for(j=N-1;j>=0;j--)
            {
                if(v[i][j]==1)
                {
                    //dp[][][2] for store largest value from lower side
                    dp[i+1][j+1][2]=dp[i+2][j+1][2]+1;  
                    
                    //dp[][][3] for store largest value from right side
                    dp[i+1][j+1][3]=dp[i+1][j+2][3]+1;  
                }
            }
        }
        
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=N;j++)
            {
                // now we will select min value from all direction .. hence we will get largest '+' sign for index (i,j)
                s=min(dp[i][j][0],min(dp[i][j][1],min(dp[i][j][2],dp[i][j][3])));  
                ans=max(ans,s);
            }
        }
        return ans;
    }
};

int main()
{
   int N = 5;
   vector<vector<int>> mines = {{4, 2}};
   Solution ob;
   cout << (ob.orderOfLargestPlusSign(N, mines));
}