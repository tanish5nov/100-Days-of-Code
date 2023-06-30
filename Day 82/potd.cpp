//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    int i,odd=0,eve=0,n=s.size();
	    for(i=0;i<n;i++){
	        if(s[i]=='1'){
	            if(i%2)odd++;
	            else eve++;
	        }
	    }
	    return (odd-eve)%3==0;
	}

};
