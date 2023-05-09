/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr+n);
        
        for(int i=0;i<n-2;i++){
            int low = i+1, high = n-1;
            while(low < high){
                int sum = arr[i] + arr[low] + arr[high];
                if(sum == 0) return true;
                else if(sum < 0) low++;
                else high--;
            }
        }
        return false;
    }
};
