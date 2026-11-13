class Solution {
public:
    int dp[46]={};
    int go(int n){
        if(n<0)
           return 0;
        if(n==0)
            return 1;
        
       auto &ret  = dp[n];
        if(ret)
            return ret;
        return ret = go(n-1)+go(n-2);
    }

    int climbStairs(int n) {
       return go(n);
        
    }
};