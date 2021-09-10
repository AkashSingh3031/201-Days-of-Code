#include<bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int numberOfArithmeticSlices(vector<int>& nums)
    {
        if(nums.empty())
            return 0;
        vector<unordered_map<int,int>> dp(nums.size()); //[index, [difference, count]]

        int res = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if((long)nums[i] - (long)nums[j] > INT_MAX || (long)nums[i] - (long)nums[j] < INT_MIN) 
                    continue;
                
                int dif = nums[i] - nums[j];
                dp[i][dif] += 1;
                
                if(dp[j].find(dif) != dp[j].end())
                {
                    dp[i][dif] += dp[j][dif];
                    res += dp[j][dif];
                }
            }
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {2,4,6,8,10};
    
    Solution ob;
    cout << ob.numberOfArithmeticSlices(nums);
}
