class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            auto it=mp.find(nums1[i]);
            if(it!=mp.end() && it->second>0){
                ans.push_back(nums1[i]);
                it->second--;
                
            
            }
        }
    return ans;    
    }
};