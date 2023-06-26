class Solution {
public:
 int fact(int n){
     int numofzero=0;
     while(n/5>0){
         numofzero=numofzero+n/5;
         n=n/5;
     }
     return numofzero;
 }
    int trailingZeroes(int n) {

        return fact(n);
        
    }
};