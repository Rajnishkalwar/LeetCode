class Solution {
public:
int solve(vector<int>& cost,int n){
        int prev=cost[0];
        int  prev1=cost[1];
        int curr;
        
        for(int i=2;i<n;i++){
                curr=cost[i]+min(prev,prev1);
                prev=prev1;
                prev1=curr;
        }
        return min(prev,prev1);
                
        }
    int minCostClimbingStairs(vector<int>& cost) {
            int  n= cost.size();
             return solve(cost,n);
            
        
    }
};