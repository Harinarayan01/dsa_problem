class Solution {
public:
    bool hari(string hh){
       int left=0;
       int right=hh.size()-1;
       while(left<=right){
           if(hh[left++]!=hh[right--]){
               return false;
           }
       } 
       return true; 
            
        
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(hari(words[i])){
             ans=words[i];
             break;
            }
        }
    return ans;    
    }
};