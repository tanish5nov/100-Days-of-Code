//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        if(k>str.size()){
            return 0;
        }
        string s1=str.substr(0,k);
        int count=0;
        for(int i=0;i<n;i++){
            string sub=arr[i].substr(0,k);
            if(sub==s1){
                count++;
            }
        }
        return count;
    }
};
