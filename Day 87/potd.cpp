
class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int p = 0 ;
        for( int h = 0 ; h < n-1 ; h++ ){
            if( prices[h] < prices[h+1] ){
                p += prices[h+1] - prices[h];
            }
        }
        return p ;
    }
};
