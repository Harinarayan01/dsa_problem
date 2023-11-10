class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int ans=-1;
       int total=0;
       for(int i=0;i<nums.size();i++){
           total+=nums[i];
       } 
       int frontsum=0;
       int rsum=total;
       for(int i=0;i<nums.size();i++){
           rsum-=nums[i];
           if(rsum==frontsum){
               return i;
           }
           frontsum+=nums[i];
       }
    return ans; 
    }
};