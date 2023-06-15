#include <iostream>
using namespace std;

void reachHome(int src, int dest){
  if(src==dest){cout<<"Reached Home";return;}
  cout<<"Source: "<<src<<" "<<"Dest: "<<dest<<endl;
  reachHome(++src, dest);
}
int main() {
  int src=0;
  int dest=10;
  reachHome(src,dest);
}
