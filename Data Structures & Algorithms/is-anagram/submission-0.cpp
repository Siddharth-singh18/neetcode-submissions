class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int>mp;
        for(auto &it:s) mp[it]++;
        for(auto &it:t){
            if(mp[it]<1) return false;
            mp[it]--;
        }
        return true;
    }
};
