class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int m=str1.size();
        int n=str2.size();
        
        
        if(m!=n){return false;}
        
        unordered_map<char,char>mp;
        unordered_map<char,char>tp;
        
        int i=0;
        while(i<m)
        {
           if(mp.find(str1[i])!=mp.end())
           {
               if(mp[str1[i]]!=str2[i])
               return false;
           }
           if(tp.find(str2[i])!=tp.end())
           {
               if(tp[str2[i]]!=str1[i])
               return false;
           }
           mp[str1[i]]=str2[i];
           tp[str2[i]]=str1[i];
           i++;
        
        }
        return true;
    }
};
