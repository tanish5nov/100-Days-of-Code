/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int n) {
        
        int a = arr[0],b = INT_MAX,mn = a;
        
        
        for (int i = 1; i < n; i++){
            if (arr[i] < a) a = arr[i];
            else if (arr[i] < b && arr[i] > a) {    
            b = arr[i];       
            mn = a;            
        }
        else if (arr[i] > b) {return {mn,b,arr[i]};}
    }
    return {};
    }
};
