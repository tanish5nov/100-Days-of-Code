//User function template in C++

class Solution 
{
    public:
    
    bool possSoln(int arr[], int n, int m, int sol){
        int pageSum=0;
        int c=1;
        
        for(int i=0; i<n; i++){
            if(arr[i]>sol){return false;}
            if(pageSum+arr[i]>sol){
                c++;
                pageSum=arr[i];
                if(c>m){
                    return false;
                }
            }
            else{
                pageSum=pageSum+arr[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        if(m>n){return -1;}
        int s=0;
        int e=accumulate(arr,arr+n,0);
        int ans=-1;
        while(s<=e){
            
            int mid=s+(e-s)/2;
            
            if(possSoln(arr,n,m,mid)){
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
