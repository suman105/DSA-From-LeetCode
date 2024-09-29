class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        multiset<int> temp;
        for(int i=0; i<nums.size();i++) temp.insert(nums[i]);
        temp.erase(val);

        int t=0;
        for(auto i : temp)
            nums[t++] = i;
        return temp.size();
    }
};