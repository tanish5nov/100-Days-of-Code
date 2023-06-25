//User function template for C++

class Solution{
  public:
    int atoi(string str) {
        int i=0;
        bool flag= false;
        if(str[0]=='-'){i=1;flag=true;}
        string ans="";
        for( ; i<str.length(); i++){
            if(isdigit(str[i])){ans.push_back(str[i]);}
            else{ans.clear(); return {-1};}
        }
        
        if(flag){return (-1)*stoi(ans);}
        else{return stoi(ans);}
    }
};
