class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> r;
        set<vector<int>> result;
        int i,j,k,l,n=nums.size();
        if(n<4) return r;
        i=j=k=l=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                k=j+1;
                l=n-1;
                while(k<l){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k]+(long long)nums[l];
                    if(sum==target){
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        v.push_back(nums[l]);
                        result.insert(v);
                        ++k;
                        --l;
                    }
                    else if (sum>target)    --l;
                    else ++k;
                }
            }
        } 
        for (auto i : result)   r.push_back(i);
        return r;
    }
};