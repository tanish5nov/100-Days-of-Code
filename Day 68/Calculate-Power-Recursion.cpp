#include <iostream>
using namespace std;

int CalcPower(int a, int b){
  if(b==0){
    return 1;
  }
  if(b==1){
    return a;
  }
  int ans= CalcPower(a,b/2);
  if(b%2==0){return ans*ans;}
  else{
    return a*ans*ans;
  }
}

int main() {
  int a,b;
  a=2;
  b=3;
  int prd=1;
  int ans= CalcPower(a,b);
  cout<<ans<<endl;
}
