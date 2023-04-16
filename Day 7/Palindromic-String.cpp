//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    int i=0;
	    int j=s.length()-1;
	    
	    while(i<=j){
	        if(s[i]!=s[j]){
	            return 0;
	        }
	        i++,j--;
	    }
	    return 1;
	}

};
