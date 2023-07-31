class Solution {
public:
    int lastRemaining(int n) {
       if(n==1)                 // if there is only one number present then return the number
               return n;
            
        return 2*(1+n/2-lastRemaining(n/2));
    }
};
 //                 1 2 3 4 5 6 7 8......
 // from L T R        2*(1,2,3,4,.....n/2)
 //                    2*f(n/2)
 // from R t L         2*(n/2 ......3,2,1)
 //                         so on a single conclusion
 //                         1+n/2-1=n/2
 //                         1+n/2-n/2=1
         