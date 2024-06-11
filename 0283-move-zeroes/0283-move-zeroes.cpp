class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                 temp.push_back(nums[i]);
            }
        }
        int n=temp.size();
      
        for(int i=n;i<nums.size();i++){
            temp.push_back(0);
        }
for (int i=0;i<temp.size();i++)
{
    nums[i]=temp[i];
}


        
    }
};