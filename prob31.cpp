class Solution {
public:   
    int longestPalindrome(string s) {
            unordered_map <char,int> count;
            int result=0;
            bool odd=false;
            for(char c:s) count[c]++;
            for(auto& c:count){
                if(c.second%2==0) result+=c.second;
                else{
                        odd=true;
                        result+=c.second-1;
                    }  
            }
            if(odd==true) result++;
            return  result;
            
            
        
    }
};
