//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        int start[n],end[n];
    for(int i=0;i<n;i++)start[i] = intervals[i][0],end[i] = intervals[i][1];
    
    sort(start,start+n);
    sort(end,end+n);
    
    int res = -1,cnt = 0, j = 0;
    for(int i=0;i<n;i++){
        while(j < n && start[i] > end[j]){
            if(cnt >= k)res = end[j];
            j++;
            cnt--;
        }
        cnt++;
    }
    
    if(cnt >= k)res = end[j+cnt-k];
    
    return res;
    }
};
