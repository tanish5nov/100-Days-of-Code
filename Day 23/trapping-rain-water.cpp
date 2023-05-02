class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        long long start = 0;
        long long end = n-1;
        long long left = a[0];
        long long right = a[n-1];
        long long ans=0;
        
        
        while(start<end){
            if(left<right){
                start++;
                if(a[start]>left)
                left = a[start];
                ans+=left-a[start];
            }
            else{
                end--;
                if(a[end]>right)
                right = a[end];
                ans=ans+right-a[end];
            }
        }
        return ans;
    }
};
