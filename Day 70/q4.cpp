//User function Template for C++
class Solution
{
public:
    vector<long long>ans;
    long long prd=1;
    void factorial(long long n, long long i){
        //base case
        prd*=i;
        if(prd>n){return;}
        ans.push_back(prd);
        factorial(n,++i);
    }
    
    vector<long long> factorialNumbers(long long N)
    {
        if(N==0 || N==1){ans.push_back(1);return ans;}
        factorial(N,1);
        return ans;
    }
};
