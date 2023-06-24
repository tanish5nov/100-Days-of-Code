#include<bits/stdc++.h>
using namespace std;

bool check(string str, int i){
    //base case
    if(i>=str.size()/2){return true;}

    //false condition
    if(str[i]!=str[str.size()-1-i]){return false;}

    check(str, ++i);
}

int main(){
    string str;
    cin>>str;
    if(check(str,0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
