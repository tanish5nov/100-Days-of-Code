class Solution {
  public:
    string maxOdd(string s) {
        string ans="";
        string temp="";
        
        for(int i=0; i<s.size();i++){
            temp=temp+s[i];
            if((int(s[i]-48)%2)){
                ans=temp;
            }
        }
        return ans;
    }
};
