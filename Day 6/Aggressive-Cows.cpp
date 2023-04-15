// User function Template for C++

class Solution {
public:
    
    bool possiblesol(vector<int>&arr, int n, int k, int sol){
        int c=1;
        int pos=arr[0];
        
        for(int i=1 ;i<arr.size(); i++){
            
            if(arr[i]-pos>=sol){c++;
                pos=arr[i];//one more cow has been placed
            }
            
            if(c==k){return true;}
        }
        return false;
    }
    
    int solve(int n, int k, vector<int> &arr) {
        
        sort(arr.begin(),arr.end());
        
        int s=0;
        int e=arr[arr.size()-1]-arr[0];
        
        int ans=-1;
        
        while(s<=e){
            int mid= s+(e-s)/2;
            
            if(possiblesol(arr,n,k,mid)){
                ans=mid;
                s=mid+1;
            }
            
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};
