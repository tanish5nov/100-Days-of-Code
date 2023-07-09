
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        map<int, int> mp;
        for(int i=1; i<=n+1; i++)
        {
            mp[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0 && arr[i]<=n+1)
            mp[arr[i]]++;
        }
        for(int i=1; i<=n+1; i++)
        {
            if(mp[i]==0)
            return i;
        }
    } 
};
