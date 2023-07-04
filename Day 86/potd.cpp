class Solution{
  public:
  
    int prd(vector<int>&a, int i, int j){
        
    }
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0,ct=0;
        long long prod=1;
        for(int j=0;j<n;++j){
            prod*=a[j];
            while(prod >= k && i <=j){
                prod/=a[i];
                i++;
            }
            ct+=(j-i+1);
        }
        return ct;
    }
};
