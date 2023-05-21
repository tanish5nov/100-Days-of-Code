// User function Template for C++

class Solution {
  public:
    int findMoves(int n, vector<int> c, vector<int>p) {
        int sum=0;
        sort(c.begin(),c.end());
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            sum+=abs(p[i]-c[i]);
        }
        return sum;
    }
};
