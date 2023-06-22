#include<bits/stdc++.h>
using namespace std;

void print1ToN(int i){
    if(i<1){return;}
    print1ToN(i-1);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    print1ToN(n);
}
