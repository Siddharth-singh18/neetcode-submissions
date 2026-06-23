class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
       int n=s.size();
       vector<int>index(256,-1);
       int j=0;
       int ans=0;
       for(int i=0;i<n;i++){
            if(index[s[i]]>=j) j=index[s[i]]+1;
            index[s[i]]=i;
            ans=max(ans,i-j+1);
       }


      return ans;

    }
};
