class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n= s.size();
        map<char,int>lastSeen;

        int ans = 0;
        int l=0;

        for(int r=0;r<n;r++){
            if(lastSeen.find(s[r])!=lastSeen.end()){
                l=max(l,lastSeen[s[r]]+1);
            }

            lastSeen[s[r]]=r;
            ans = max(ans,r-l+1);
        }

        return ans;

    }
};
