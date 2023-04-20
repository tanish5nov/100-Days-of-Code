//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2){
        vector<int>v(2,-1);

            for(int i=1;i<str1.length();i++){

                if(str2.find(str1.substr(0,i))!=string::npos){

                v[0]=0;

                v[1]=i-1;}

            }

        return v;
    }
};
