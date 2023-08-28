class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>st;
        for(int i=0;i<s.size();i++){
            st[s[i]]++;
        }
        int ans=0;
        for(int i=0;i<t.size();i++){
            if(st.find(t[i])==st.end()){
             ans++;
            }
            else{
                st[t[i]]--;
                if(st[t[i]]==0){
                    st.erase(t[i]);
                }
            }
        }
     return ans;    
        
    }
};