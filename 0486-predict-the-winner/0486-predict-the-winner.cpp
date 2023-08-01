class Solution {
public:
    int solve(vector<int>& nums,int i,int j){
            if(i>j)
                    return 0 ;
            if(i==j)
                    return nums[i];
            int opt1=nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1));
            int opt2=nums[j]+min(solve(nums,i,j-2),solve(nums,i+1,j-1));
            return max(opt1,opt2);
    }    
    bool PredictTheWinner(vector<int>& nums) {
            int sum=0;
            int player1=solve(nums,0,nums.size()-1);
            for(int i=0;i<nums.size();i++){
                     sum+=nums[i];
            }
            int player2=sum-player1;
            if(player1>=player2){
                    return true;
            }
            else
                    return false;
            
        
    }
};