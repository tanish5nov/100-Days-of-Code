#include <iostream>
using namespace std;

int counting(int n){
  if(n==0){return 1;}
  cout<<"The value is: "<<n<<endl;
  return counting(n-1);
}

int main() {
  int n;
  cout<<"Enter value : "<<endl;
  cin>>n;
  counting(n);
  return 0;
}
