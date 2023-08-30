class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
              s[i]=s[i]-48+s[i-1];
            }
            
        }
        return s;
    }
};