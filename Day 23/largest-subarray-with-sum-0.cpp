/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        unordered_map<int, int> mp;
        int res = 0;
        int sum1 = 0;
        for(int i=0;i<n;++i){
            sum1 += arr[i];
            if (sum1 == 0){
                res = max(res, i+1);}
            else if(mp.find(sum1)!=mp.end()){
                res = max(res, i-mp[sum1]);}
            else{
                mp[sum1] = i;}
        }
        return res;
    }
};
