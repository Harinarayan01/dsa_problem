class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n!=0){
            int p=n%10;
            product*=p;
            sum+=p;
            n/=10;

        }
    return product-sum;    
    }
};