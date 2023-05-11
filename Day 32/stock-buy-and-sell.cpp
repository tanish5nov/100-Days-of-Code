//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
        vector<vector<int>>ans;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]) ans.push_back({i-1,i});
        }
        return ans;
    }
};
