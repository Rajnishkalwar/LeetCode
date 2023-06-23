class Solution {
public:
    int maxProfit(vector<int>& prices) {
            if(prices.size()==1){
                    return 0;
            }
            int profit=0;
            int left=0;
            for(int right=1;right<prices.size();right++){
                    if(prices[left]<prices[right]){
               profit=max(profit,prices[right]-prices[left]);
                    }
                    else{
                    left=right;
                    }
            }
            return profit;
            
        
    }
};