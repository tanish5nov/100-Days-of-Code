
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string s="";
        vector<string>v;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='.')
            {
                v.push_back(s);
                s="";
                continue;
            }
            s+=S[i];
        }
        v.push_back(s);
        string str="";
        for(int i=v.size()-1;i>=0;i--)
        {
            if(i!=0){
            str+=v[i];
            str+='.';
            }
            else
            {
                str+=v[i];
            }
        }
        return str;
    } 
};
