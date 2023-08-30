class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
              s[i]=(int)s[i]-48+(int)s[i-1];
            }
            
        }
        return s;
    }
};