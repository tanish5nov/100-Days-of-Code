//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ans=arr[0];
	    long long mini=arr[0];
	    long long maxi=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i-1]==0){
	            maxi=arr[i];
	            mini=arr[i];
	            ans=max<long long>(ans,maxi);
	            continue;
	        }
	        long long int t1=mini*arr[i];
	        long long int t2=maxi*arr[i];
	        maxi=max<long long>(t1,t2);
	        mini=min<long long>(t1,t2);
	        maxi=max<long long>(maxi,arr[i]);
	        mini=min<long long>(mini,arr[i]);
	        ans=max<long long>(ans,maxi);
	        
	    }
	    return ans;
	}
};
