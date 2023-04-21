class Solution
{
    public:
    string rearrangeString(string str)
    {
        int n=str.size();
        
        int i=0,j=i+1,flag=0;
        
        while(i<n && j<n){
            if((str[i]!=str[j]) && flag==0){
                i++,j++;
            }
            else if(str[i]==str[j]){
                flag=1;
                j++;
            }
            else if((str[i]!=str[j]) && flag==1){
                swap(str[i+1],str[j]);
                i++,j=i+1;
                flag=0;
            }
        }
        
        if(str[n-2]==str[n-1]){
            i=n-1,j=n-2,flag=0;
            while(i>=0 && j>=0){
                if((str[i]!=str[j]) && flag==0){
                    i--,j--;
                }
                else if(str[i]==str[j]){
                    flag=1;
                    j--;
                }
                else if((str[i]!=str[j]) && flag==1){
                    swap(str[i-1],str[j]);
                    i--,j=i-1;
                    flag=0;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            if(str[i]==str[i+1]){
                return "-1";
            }
        }
        return str;
    }
    
};
