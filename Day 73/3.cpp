#include<bits/stdc++.h>
using namespace std;
string name="Tanish";

void printName(int cnt){
    if(cnt==6){return;}
    cout<<name<<endl;
    printName(++cnt);
}

int main(){
    printName(1);
}
