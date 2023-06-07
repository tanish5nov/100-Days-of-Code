// User function Template for C++
class Solution {
  public:
    bool isPrime(int j){
        if (j < 2) {
        return false;
        }
        for(int i=2;i<=sqrt(j);i++){
            if(j%i==0)
              return false;
        }
        return true;
    }
    vector<int> leastPrimeFactor(int n) {
        vector<int>ans;
       
        
        ans.push_back(0);
        ans.push_back(1);
        
        for(int i=2;i<=n;i++){
            int least=n;
            for(int j=2;j<=i;j++){
                if(i%j==0 && isPrime(j)){
                    least=j;
                    break;
                }
                
            }
            ans.push_back(least);
        }
        return ans;
    }
};
