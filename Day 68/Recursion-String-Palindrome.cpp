#include <iostream>
using namespace std;

bool CheckPalindrome(string &s, int i, int j){
  if(i>j){
    return true;
  }

  if(s[i]!= s[j]){
    return false;
  }
  else{
    return CheckPalindrome(s,i+1,j-1);
  }
}

int main() {
  string s="racecar";
  int i=0;
  int j=s.length()-1;
  bool isPalindrome= CheckPalindrome(s, i, j);

  isPalindrome?cout<<"YES"<<endl:cout<<"NO"<<endl;
  cout<<s;
}
