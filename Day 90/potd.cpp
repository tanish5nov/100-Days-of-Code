/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        if(n<3){return false;}
        
        sort(arr,arr+n);
        
        for(int i=0; i<n-1; i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==0){return true;}
                else if(sum<0){j++;}
                else if(sum>0){k--;}
            }
        }
        
        return false;
    }
};
