class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        unordered_map<char,int> temp;
        for(auto i : s) temp[i]++;
        for(auto i : t){
            if(temp[i]==0)  return i;
            temp[i]--;
        }
        return 'a';
    }
};