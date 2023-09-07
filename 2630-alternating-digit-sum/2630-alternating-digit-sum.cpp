class Solution {
public:
    int alternateDigitSum(int n) {
       string hh=to_string(n);
       int sum=0;
       for(int i=0;i<hh.size();i++){
           if(i%2==0){
           sum+=(hh[i]-'0');
           }
           else{
               sum-=(hh[i]-'0');
           }
       }
    return sum;   
    }
};