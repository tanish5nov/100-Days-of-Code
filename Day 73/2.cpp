#include<bits/stdc++.h>
using namespace std;

void print1ToN(int cnt, int n){
    if(cnt==n){cout<<cnt<<endl; return;}
    cout<<cnt<<endl;
    print1ToN(++cnt,n);
}

int main(){
    int n;
    cin>>n;
    print1ToN(1,n);
}
