class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n=nums.size();
        int l=0,r=k;
        vector<int>ans;
        

        while(r<n){
            int maxn=nums[l];
            for(int i=l;i<r;i++){
                maxn=max(maxn,nums[i]);
            }
            ans.push_back(maxn);
            l++;
            r++;
        }

        int maxn=nums[l];
        for(int i=l;i<r;i++){
                maxn=max(maxn,nums[i]);
            }
            ans.push_back(maxn);

        return ans;

    }
};
