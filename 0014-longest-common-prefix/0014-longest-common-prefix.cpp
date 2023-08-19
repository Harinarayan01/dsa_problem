class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        int i=0;
        string str2=strs[strs.size()-1];
        int j=0;
        string ans="";
        while(i<str1.size() && j<str2.size()){
            if(str1[i]==str2[j]){
                ans+=str1[i];
                i++;
                j++;
            }
            else{
                return ans;
            }
         
        }
    return ans;    
    }
};