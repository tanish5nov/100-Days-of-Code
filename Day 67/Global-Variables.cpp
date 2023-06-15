#include <iostream>
using namespace std;
#define pi 3.14
int i=5;
void func(int & i){
  i=i+1;
}
int main() {
  func(i);
  cout<<i*2<<endl;
}
