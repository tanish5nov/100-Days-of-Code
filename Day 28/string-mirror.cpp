//User function Template for C++

class Solution{
public:
    string stringMirror(string s){
        string temp="";
        temp+=s[0];
        for(int i=1;i<s.length();i++){
            if((s[i-1]>s[i])||(i>1 && s[i-1]==s[i]))    temp+=s[i];
            else break;
        }
        string ans="";
        ans=ans+temp;
        reverse(temp.begin(),temp.end());
        ans=ans+temp;
        return ans;
    }
};
