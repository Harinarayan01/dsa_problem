class Solution {
public:
    string sortSentence(string s) {
     vector<string>ans(10);
     int n=s.size();
     string word="";
     for(int i=0;i<n;i++){
       if(s[i]>=48 && s[i]<=57){
         ans[s[i]-48]=word+" ";
         word="";
         i++;
       }
       else{
       word+=s[i];

       }

     } 
     string ss="";
     for(auto x:ans){
          ss+=x;
     }
     ss.pop_back();
    return ss;
    }
};