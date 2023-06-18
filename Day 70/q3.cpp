// User function template for C++

class Solution {
  public:
    long long ans=0;
    long long sumOfSeries(long long N) {
        if(N==1){ans=ans+(N*N*N);return ans;}
        sumOfSeries(N-1);
        ans=ans+(N*N*N);
        return ans;
    }
};
