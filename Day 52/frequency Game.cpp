// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;}
        int x=INT_MAX;
        int ans;
        for(auto i:m)
        {
               if(i.second<x)
               {
                   x=i.second;
                   ans=i.first;
               }
               else if(i.second==x)
               {
                   if(i.first>ans)
                   {
                       ans=i.first;
                   }
               }
        }
        return ans;
    }
};
