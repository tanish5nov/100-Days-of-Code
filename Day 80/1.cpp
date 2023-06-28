// User function template for C++

class Solution {
  public:

    bool isGood( int n, int D, int sum ){
        if( n==0 )
            return true;
        int temp = n%10;// current digit
        if( temp<=sum or temp==D )
            return false;
        
        return isGood( n/10, D, sum+temp );
    }
    vector<int> goodNumbers(int L, int R, int D) {
       vector<int> ans;
        for( int i=L; i<=R; i++ ){
            if( i%10==D )   
                continue;
            if(isGood(i/10, D, i%10))
                ans.push_back( i );
        }
        return ans;
    }
};
