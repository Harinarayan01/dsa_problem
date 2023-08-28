class Solution {
public:
    bool isPerfectSquare(int num) {
        long i=1;
        for( i=1;i*i<=num;i++){
            if(i*i==num){
                return true;
            }
        }
    return false;    
    }
};