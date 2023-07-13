//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int>mp;
        set<int>s;
        int last=-1;
        for(int i=0;i<n;i++)
        {
           
            mp[arr[i]]+=1;
           
        }
        for(auto i:mp)
        {
            if(s.find(i.second)!=s.end())
                return false;
            s.insert(i.second);
        }
        
        return true;
    }
};
