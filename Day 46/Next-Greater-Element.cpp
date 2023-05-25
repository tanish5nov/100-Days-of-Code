class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
       vector<long long>ans;
        stack<long long>st;
        
        ans.push_back(-1);
        st.push(arr[n-1]);
        
        //main logic
        for(int i=n-2;i>=0;i--){
            while(!st.empty()&&st.top()<=arr[i]){
                st.pop();
            }
            long long top=(st.empty())?-1:st.top();
            ans.push_back(top);
            st.push(arr[i]);
        }
        
        
        //ab reverse kardo
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
