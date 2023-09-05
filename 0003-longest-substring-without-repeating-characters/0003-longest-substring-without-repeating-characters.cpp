class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int ans=0;
        int j=0;
        
        int i=0;
        int n=s.size();
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
            ans=max(ans,j-i);

            }
            else{
                st.erase(s[i++]);
            }
        }
        return ans;

    }
};