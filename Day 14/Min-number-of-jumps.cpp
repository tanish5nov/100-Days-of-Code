// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        int count=0;
        for(int i =1;i<n;i++){
            arr[i]=max(arr[i]+i,arr[i-1]);
            }
        
        
        int i =0;
        while(i<n-1)
        {
            if(arr[i]<=i)
            return -1;
            i=arr[i];
            count++;
        }
       
        
        return count;
    }
};
