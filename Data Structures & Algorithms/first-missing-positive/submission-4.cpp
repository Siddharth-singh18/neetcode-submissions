class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>n) continue;
            while(nums[i]!=nums[nums[i]-1]){
                if(nums[i]<=0 || nums[i]>n) break;
                swap(nums[i],nums[nums[i]-1]);
                if(nums[i]<=0 || nums[i]>n) break;
            }

        }

        int ans=n+1;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans=i+1;
                break;
            }
        }

        return ans;

    }
};