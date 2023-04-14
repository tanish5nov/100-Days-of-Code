

bool findPair(int arr[], int l, int n){
    
    sort(arr,arr+l);  //no issues

    int s=0;
    int e=s+1;
    
    while(s<l-1 && e<l){
        if(s==e){e++;}
        int diff=abs(arr[e]-arr[s]);
        
        if(diff==n){return true;}
        
        if(n>diff){e++;}
        
        if(n<diff){s++;}
    }
    
    return false;
    
}
