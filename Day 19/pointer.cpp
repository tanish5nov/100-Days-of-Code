#include <iostream>
using namespace std;

int * solve(int a){
  int *ans = &a;
  cout<<&a<<endl;
  return ans;
}

int main() {
  int a=5;
  
  cout<<solve(a)<<endl;

  return 0;
}
