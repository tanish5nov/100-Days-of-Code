//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr,arr+n);
	    vector<int>ans;
	    
	    for(int i=n-1; i>=n-k; i--){
	        ans.push_back(arr[i]);
	    }
	    return ans;
	}

};
