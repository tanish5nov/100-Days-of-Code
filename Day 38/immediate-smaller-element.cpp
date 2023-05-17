//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    int small=-1;
        for(int i=n-1;i>=0;i--) {
            int curr =arr[i];
            arr[i] = curr > small ? small : -1;
            small = curr;
        }
	}

};
