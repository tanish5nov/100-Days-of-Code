class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        
        int n=sizeof(arr)/sizeof(arr[0]);
        vector<int>srt;
        
        for(int i=0; i<num; i++){
            srt.push_back(arr[i]);
        }
        
        sort(srt.begin(),srt.end());
        
        return srt;
    }
};
