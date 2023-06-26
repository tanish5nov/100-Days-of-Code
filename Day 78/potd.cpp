// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        if(n==r) return 1;
        if(r>n) return 0;
        int mod = 1e9+7;
        vector<int>prev(n,1);
        vector<int>curr;
        
         for(int i=2;i<=n;i++){
            curr.resize(i,0);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    curr[j]=1;
                }
                else{
                    curr[j] = ((prev[j])%mod+(prev[j-1])%mod)%mod; 
                }
            }
            prev = curr;
        }
        return (prev[r])%mod;
    }
};
