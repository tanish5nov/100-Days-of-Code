
class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        int ans=INT_MAX;
        int last=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x || arr[i]==y){
                if(last!=-1 && arr[last]!=arr[i]) ans=min(ans,i-last);
                last=i;
            }
        }
        return ans==INT_MAX? -1:ans;
    }
};
