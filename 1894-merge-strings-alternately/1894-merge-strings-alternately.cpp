class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        
        
        string ss="";
        int i=0,j=0;
        while(i<n && j<m) {
            
                ss+=word1[i];
                ss+=word2[j];
                i++;
                j++;
            
        } 
        while(i==n && j!=m){
            ss+=word2[j];
            j++;

        }
        while(j==m && i!=n){
            ss+=word1[i];
            i++;
        }

    return ss;  
    }
};