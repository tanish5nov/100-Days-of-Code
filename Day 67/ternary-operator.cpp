#include <iostream>
using namespace std;
int main() {
  int i=2;
  string ans="";

  cout<<"before"<<endl;
  //aam zindagi
  if(i==2){
    ans="True";
  }
  else{
    ans="False";
  }
  cout<<ans<<endl<<endl;

  cout<<"After"<<endl;
  //mentos zindagi
  i==2?ans="True":ans="False";
  cout<<ans<<endl;
}
