
class Solution {
  public:
    long long countBits(long long N) {
        int bits=0;
        for(int i=1; i<=N; i++){
            bits=bits+__builtin_popcount(i);
        }
        
        return bits;
    }
};
