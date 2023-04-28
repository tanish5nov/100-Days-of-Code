//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr, arr+N);
        
        string ans = "";
        for(int j = 0; j < arr[0].length(); j++){
                
            string first = arr[0];
            string last = arr[N-1];
                    
            if(first[j] == last[j]){
                ans =ans+ first[j];}
            else {break;}
        }
        
        
        return {ans == "" ? "-1" : ans};
    }
};
