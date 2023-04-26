#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x;
	    cin>>x;
	    
	    if(x%10>=5){int ret= 100-(x-(x%10)+10);
	        cout<<ret<<endl;
	    }
	    else{
	        int ret= 100-(x-(x%10));
	        cout<<ret<<endl;
	    }
	}
	return 0;
}
