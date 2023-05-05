// User function template for C++

class Solution {
  public:
  
    bool checksorted(int arr[], int n, int i){
        if(i==(n-1)){return true;}
        if(arr[i+1]<arr[i]){return false;}
        
        return checksorted(arr,n,i+1);
    }
     
    bool arraySortedOrNot(int arr[], int n) {
        int i=0;
        if(checksorted(arr,n,i)){return true;}
        else{return false;}
    }
};
