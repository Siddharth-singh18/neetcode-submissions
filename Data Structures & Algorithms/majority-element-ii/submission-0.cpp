class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n=nums.size();
        int x=n/3;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        set<int>s;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>x) s.insert(nums[i]);
        }

        vector<int>ans;
        for(auto &it:s){
            ans.push_back(it);
        }

        return ans;
        
    }
};