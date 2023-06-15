#include <iostream>
using namespace std;

inline int compare(int &i){
  return i==1?1:0;
}
int main() {
  int i=2;
  int ans=compare(i);
  cout<<ans;
}
