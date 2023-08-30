class Solution {
public:
    int solve(vector<int>&nums){
            int n=nums.size();
            int prev2=0;
            int prev1=nums[0];
            if(n==0){
                return nums[0];
            }
            for(int i=1;i<n;i++){
                int inc=prev2+nums[i];
                int exc=prev1+0;
            
                int ans=max(inc,exc);
                    prev2=prev1;
                    prev1=ans;
            }
            return prev1;
    }    
    int rob(vector<int>& nums) {

            return solve(nums);
        
    }
};