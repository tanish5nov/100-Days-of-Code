//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            if(mp[arr[i]] != 0) 
                count += mp[arr[i]];
            mp[k-arr[i]]++;
        }
        return count;
    }
};
