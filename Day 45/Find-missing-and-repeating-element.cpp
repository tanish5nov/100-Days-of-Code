class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
         sort(arr.begin(),arr.end());
        int repeat=-1,miss=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) repeat=arr[i];
            if(arr[i]!=arr[i+1]-1 && arr[i]<arr[i+1]) miss=arr[i]+1;
        }
        if(arr[0]!=1) miss=1;
        else if(miss == -1) miss=arr[n-1]+1;
        
        return {repeat,miss}; 
    }
};
