class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int f=0,l=nums.size()-1;
        while(f<=l)
        {
            int mid = (f+l)/2;
            if(target==nums[mid])   return mid;
            else if(nums[f]<=nums[mid])
            {
                if(target>=nums[f] && nums[mid]>=target)    l=mid-1;
                else f=mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[l])    f=mid+1;
                else l=mid-1;
            }
        }
        return -1;
    }
};