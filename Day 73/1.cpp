#include<bits/stdc++.h>
using namespace std;

void printNTo1(int n){
    if(n==1){cout<<n<<endl; return;}
    cout<<n<<endl;
    printNTo1(--n);
}

int main(){
    int n;
    cin>>n;

    printNTo1(n);
}
