

class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
        int carry=0;
        string ans;
        int i=n-1,j=m-1;
        
        while(i>=0 && j>=0){
            int x= a[i] + b[j] + carry;
            int digit=x%10;
            ans.push_back(digit + '0');
            carry=x/10;
            i--,j--;
        }
        
        while(i>=0){
            int x= a[i] + 0 +carry;
            int digit =x%10;
            ans.push_back(digit + '0');
            carry=x/10;
            i--;
        }
        
        while(j>=0){
            int x= b[j] + 0 +carry;
            int digit= x%10;
            ans.push_back(digit+'0');
            carry=x/10;
            j--;
        }
        
        if(carry){
            ans.push_back(carry+'0');
        }
        
        while(ans[ans.size()-1]=='0'){
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
