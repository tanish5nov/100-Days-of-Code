//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int>ind;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]==i+1){ind.push_back(arr[i]);}
	    }
	    
	    return ind;
	}
};
