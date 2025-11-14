class Solution {
public:
    int divide(long long dividend, long long divisor) {
        int divsign=0;
        int dsign=0;
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(dividend<0){
            dsign=-1;
        }
        if(divisor<0){
            divsign=-1;
        }
        long long  result=abs(dividend)/abs(divisor);
        if(dsign==-1 && divsign==-1){
            return result;
        }
        else if(dsign==0 && divsign==0){
            return result;
        }
        else{
            return result*-1;
        }
    }
};
