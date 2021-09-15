#include<bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int maxTurbulenceSize(vector<int>& arr)
    {
        int res = 0;
        for (int i = 0, cnt = 0; i + 1 < arr.size(); ++i, cnt *= -1)
        {
            if (arr[i] > arr[i + 1]) 
                cnt = cnt > 0 ? cnt + 1 : 1;
            else if (arr[i] < arr[i + 1]) 
                cnt = cnt < 0 ? cnt - 1 : -1;
            else 
                cnt = 0;
            res = max(res, abs(cnt));
        }
        return res + 1;
    }
};

int main()
{
    vector<int> arr = {9,4,2,10,7,8,8,1,9};
    
    Solution ob;
    cout<< ob.maxTurbulenceSize(arr);
}
