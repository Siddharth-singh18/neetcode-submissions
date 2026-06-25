class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();

        if(n>m) return false;

        vector<int>need(26,0);
        for(int i=0;i<n;i++){
            need[s1[i]-'a']++;
        }

        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[s2[i]-'a']++;
        }

        int left=0;
        int right=n-1;

        while(right<m-1){
            if(freq==need) return true;
            right++;
            freq[s2[right]-'a']++;
            freq[s2[left]-'a']--;
            left++;
        }

        if(freq==need) return true;

        return false;

    }
};
