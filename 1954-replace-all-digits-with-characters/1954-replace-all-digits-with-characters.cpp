class Solution {
public:
    string replaceDigits(string s) {
        
      int n=s.length();
      string ans=""; 
      for(int i=0;i<n;i++){
          if(i%2==1){
              ans+=char(s[i]-48+s[i-1]);
          }
          else{
              ans+=s[i];
          }
      }
      return ans;
    }
};