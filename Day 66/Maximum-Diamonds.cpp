
class Solution {
  public:
    long long maxDiamonds(int a[], int n, int k) {
        priority_queue < int > pq;
        for(int i=0;i<n;i++){
            pq.push(a[i]);
        }
        long long ans=0;
        while(k--){
           int x=pq.top();
           ans+=x;
           pq.pop();
           pq.push(x/2);
        }
       return ans;
    }
};
