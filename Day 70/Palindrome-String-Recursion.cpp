//User function template for C++
class Solution{
public:	
	
	int palindrome(string s,int i){
	    if(i>= (s.size()/2)){return 1;}
	    if(s[i]!=s[s.size()-i-1]){return 0;}
	    return palindrome(s,++i);
	}
	
	int isPalindrome(string s)
	{
	    return palindrome(s,0);
	}

};
