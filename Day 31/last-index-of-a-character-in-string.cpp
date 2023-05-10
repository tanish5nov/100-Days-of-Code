class Solution{
    public:
    
    int LastIndex(string s, char p){
        int index=0;
        int i=0;
        while(i<s.size()){
            if(s[i]==p){index=i;}
            i++;
        }
        if(index>0){return index;}
        else{return {-1};}
    }
};
