//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        vector<int>fact(n);
        fact[0] = 1;
        for(int i = 1; i < n; i++){
            fact[i] = fact[i-1] * i;
        }
        string ans;
        int i = n-1;
        vector<char>vals;
        for(int j = 0; j < n; j++){
            vals.push_back(char('0'+j+1));
        }
        while(i >= 0){
            int div = ceil((double)k / fact[i]);
            k = k - (div-1)*fact[i];
            div %= n;
            div--;
            div += (i+1);
            div %= (i+1);
            ans.push_back(vals[div]);
            vals[div] = -1;
            vector<char>temp;
            for(int j = 0; j <= i; j++){
                if(vals[j] != -1){
                    temp.push_back(vals[j]);
                }
            }
            vals = temp;
            i--;
        }
        return ans;
    }
};
