class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        int i=0;
        int j=(n-i-1);
        int count=0;
        
        while(i<=j){
            if(arr[i]!=arr[j]){count++;}
            i++;
            j--;
        }
        
        return count/2 + count%2;
    }
};
