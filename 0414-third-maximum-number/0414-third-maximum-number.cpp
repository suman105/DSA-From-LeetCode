class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        long long m1 = LLONG_MIN, m2 = LLONG_MIN, m3 = LLONG_MIN;
        for(auto i : nums){
            if(i>m1)    m1=i;
        }
        for(auto i : nums){
            if(i>m2 && i<m1)    m2=i;
        }
        for(auto i : nums){
            if(i>m3 && i<m2)    m3=i;
        }
        if(m3==LLONG_MIN) return m1;
        return m3;
    }
};