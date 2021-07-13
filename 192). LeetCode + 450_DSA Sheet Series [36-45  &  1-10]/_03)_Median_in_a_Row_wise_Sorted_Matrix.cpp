//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        int min = INT_MAX, max = INT_MIN;
        for (int i=0; i<r; i++)
        {
            // Finding the minimum element
            if (matrix[i][0] < min)
                min = matrix[i][0];
      
            // Finding the maximum element
            if (matrix[i][c-1] > max)
                max = matrix[i][c-1];
        }
      
        int required = (r * c + 1) / 2;
        while (min < max)
        {
            int mid = min + (max - min) / 2;
            int count = 0;
      
            // Find count of elements smaller than mid
            for (int i = 0; i < r; ++i)
                count += (upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin());
            if (count < required)
                min = mid + 1;
            else
                max = mid;
        }
        return min;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends