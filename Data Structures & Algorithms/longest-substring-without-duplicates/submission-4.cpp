class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int l=0;
        int ans=0;
        unordered_map<char,int>lastSeen;

        for(int r=0;r<n;r++){
            if(lastSeen.find(s[r])!=lastSeen.end()){
                l=max(l,lastSeen[s[r]]+1);              
            }

            ans=max(ans,r-l+1);
            lastSeen[s[r]]=r;

        }

        return ans;


    }
};
