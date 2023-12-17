/* 53. Maximum Subarray
Medium

32747

1367

Add to List

Share
Given an integer array nums, find the subarray with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  
        if(nums.size()==1){
            return nums[0];
        }
        int n=nums.size();
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(maxSum<sum){
                maxSum=sum;
            }
            if(sum<0){
                sum=0;
            }
          }
          return maxSum;

        
    }
};