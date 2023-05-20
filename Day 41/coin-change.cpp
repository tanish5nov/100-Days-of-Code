class Solution {
  public:
    long long int count(int coins[], int n, int sum) {
        long long int num=0;
        long long int *dp = new long long int[sum+1];
        dp[0] =1;
        
        for(int i=0;i<n;i++) {
            for(int total=1;total<=sum;total++) {
                if(total >= coins[i])
                    dp[total] += dp[total-coins[i]];
            }
        }
        
        return dp[sum];
    }
};
