//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr, arr+n);
	    
	    while(n-1){
	        if(arr[n-1]!=arr[n-2]){return {arr[n-2]};}
	        n--;
	    }
	    return {-1};
	}
};
