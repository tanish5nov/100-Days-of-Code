class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        if(a.length()!=b.length()){return false;}
        
        int i=0,j=0;
        
        while(i<a.length() && j<b.length()){
            if(a[i]!=b[j]){return false;}
            i++,j++;
        }
        return true;
    }

};
