class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int k) 
    { 
    
       sort(arr,arr+N);
       
       int s=0;
       int e=(N-1);
       int mid= s+(e-s)/2;
       
       while(s<=e){
           if(arr[mid]==k){
               return 1;
           }
           
           if(arr[mid]>k){
               e=mid-1;
           }
           
           else{s=mid+1;}
           
           mid= s+(e-s)/2;
       }
       
       return {-1};
       
    }
};
