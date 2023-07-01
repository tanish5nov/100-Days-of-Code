class Solution {
  public:
    int setBits(int N) {
       vector<int>bits;
       
       while(N>0){
           bits.push_back(N%2);
           N/=2;
       }
       int count=0;
       for(int i=0; i<bits.size(); i++){
           if(bits[i]==1){count++;}
       }
       return count;
    }
};
