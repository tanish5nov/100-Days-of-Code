
class Solution{
    public:
    //You need to complete this fucntion
    
    long long calc(int N,int R){
        //base case
        if(R==0){
            return 1;
        }
        
        if(R==1){
            return N;
        }
        
        long long ans = calc(N,R/2);
        long long sq= ans*ans % 1000000007;
        
        return (R&1)?sq*N%1000000007:sq%1000000007;
    }
    
    long long power(int N,int R)
    {
        int ans=calc(N, R)%1000000007;
        return ans;
    }

};
