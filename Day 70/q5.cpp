//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long>ans;
    void fibo(int count, int n, int i){
        if(count>=n){return;}
        long long sum=ans[i-1]+ans[i-2];
        ans.push_back(sum);
        fibo(++count,n,++i);
    }
    vector<long long> printFibb(int n) 
    {
        if(n==1){ans.push_back(1);return ans;}
        ans.push_back(1);
        ans.push_back(1);
        int count=2;
        int i=2;
        fibo(count,n,i);
        return ans;
    }
};
