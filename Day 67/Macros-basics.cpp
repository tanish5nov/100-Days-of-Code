#include <iostream>
using namespace std;
#define pi 3.14
int main() {
  cout<<pi*3<<endl;
  pi=pi+1; //can't be done 
  cout<<pi*3<<endl; //will throw error
}
