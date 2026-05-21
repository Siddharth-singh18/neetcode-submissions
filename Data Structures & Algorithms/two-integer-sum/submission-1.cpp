class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++) vp.push_back({nums[i],i});
        map<int,int>mp;

        for(int i=0;i<n;i++) mp[nums[i]]++;
        for(int i=0;i<n;i++){
            if(mp[target-nums[i]]>0){
                for(auto &it:vp){
                    if(it.first==target-nums[i]){
                    if(i!=it.second) return {i,it.second};
                    }
                }
            }
        }

        return {-1,-1};

    }
};
