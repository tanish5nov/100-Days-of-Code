class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int>a;
        sort(arr, arr+n);
        if(arr[0]==0 && (arr[1]==0)){a.push_back(0);}
        int temp=0;
        for(int i=0; i<n; i++){
            if(arr[i]==temp){continue;}
            temp=arr[i];
            if(arr[i+1]==arr[i] || arr[i-1]==arr[i]){
                a.push_back(arr[i]);
            }
        }
        if(a.size()==0){return {-1};}
        else{return a;}
        }
};
