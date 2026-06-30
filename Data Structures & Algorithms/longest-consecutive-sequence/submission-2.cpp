class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n=nums.size();
        int les=0;
        int cnt=1;
        unordered_set<int>st;

        for(int i=0;i<n;i++) st.insert(nums[i]);

        // for(int i=0;i<n;i++){
        //     if(!st.count(nums[i]-1)) les--;
        // }

        for(auto &it:st){
            if(!st.count(it-1)){
                int present=it;
                while(st.count(present+1)){
                    cnt++;
                    present++;
                }
                les=max(cnt,les);
                cnt=1;
            }
        }

        return les;

        
        
    }
};
