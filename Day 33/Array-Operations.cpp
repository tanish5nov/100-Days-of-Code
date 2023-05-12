class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        
        int ans=1;
        
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){ 
                
                check=true;
            }
            
            if(arr[i]!=0 and arr[i+1]==0){
                ans++;
                check=true;
            }
            
        }
        
        if(check==false) return -1;
        if(arr[n-1]==0) return ans-1;
        return ans;
    }
};
