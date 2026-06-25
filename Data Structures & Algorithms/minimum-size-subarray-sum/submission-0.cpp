class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];

        if(sum<target) return 0;

        int left=0;
        sum=0;
        int ans = n;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                ans = min(ans,right-left+1);
                sum-=nums[left];
                left++;
            }
        }

        return ans;
        
    }
};