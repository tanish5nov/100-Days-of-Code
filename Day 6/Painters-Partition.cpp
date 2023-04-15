//User function template for C++

class Solution
{
  public:
  
    bool possiblesolution(int arr[], int n, int k, long long sol){
        long long t=0;
        int p=1;
        
        for(int i=0; i<n; i++){
            if(arr[i]>sol){return false;}
            
            else if(t+arr[i]>sol){
                p++;
                t=arr[i];
                if(p>k){return false;}
            }
            
            else{
                t=t+arr[i];
            }
        }
        
        return true;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        long long s=0;
        long long e=0;
        
        for(int i=0; i<n; i++){
            e=e+arr[i];
        }
        
        long long ans= -1;
        
        while(s<=e){
            long long mid=s+(e-s)/2;
            
            if(possiblesolution(arr, n,k, mid)){
                ans=mid;
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
