class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int s=0;
        int e=n;
        int mid=s+(e-s)/2;
        
        while(s<=e){
            
            int sum1=0;
            int sum2=0;
            
            for(int i=0;i<mid;i++){
                 
                sum1=sum1+a[i];
            }
            
            for(int i=mid+1;i<n;i++){
                sum2=sum2+a[i];
            }
            
            if(sum1==sum2){
                return mid+1;
            }
            
            else if(sum1>sum2){
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }
            
            mid=s+(e-s)/2;
       }   
       return -1;
    }

};
