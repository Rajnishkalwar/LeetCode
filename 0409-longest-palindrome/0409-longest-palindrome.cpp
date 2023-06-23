class Solution {
public:
    int longestPalindrome(string s) {
            unordered_map<char,int> counts;
            bool odd=false;
            int result=0;
            for(char c:s) counts[c]++;
            for(auto& c:counts){
                    if(c.second%2==0){
                            result+=c.second;
                    }
                    else{
                            odd=true;
                            result+=c.second-1;
                    }
            } 
            if(odd) result+=1;
            return result;
            
        
    }
};