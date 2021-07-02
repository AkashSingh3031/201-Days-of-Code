class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,h=nums.size()-1,mid;
        while(l<h){
            mid=l+(h-l)/2;
            if(nums[mid]==nums[mid+1] or nums[mid]==nums[mid-1])return nums[mid];
            else if(nums[mid]<mid+1)h=mid-1;
            else l=mid+1;
        }
        return mid;
    }
};