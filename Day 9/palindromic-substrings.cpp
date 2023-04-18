class Solution {
public:

    int expand(string s, int i , int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            j++;
            i--;
        }
        return count;
    }

    int countSubstrings(string s) {
        int count=0;

        for(int i=0; i<s.length(); i++){
            int ansOdd=expand(s,i,i);
            count=count+ansOdd;
            int ansEven=expand(s,i,i+1);
            count=count+ansEven;
        }

        return count;
    }
};
