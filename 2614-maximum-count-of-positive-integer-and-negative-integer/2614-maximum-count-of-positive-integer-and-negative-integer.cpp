class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive=0;
        int mini=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive++;
            }
            if(nums[i]<0){
                mini++;
            }
        }
       if(mini>positive || mini==positive){
           ans=mini;
       }
       if(positive>mini){
           ans=positive;
       }
    return ans;       
    }
};