class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int> arrn,arrp;
            for(int i=0;i<n;i++){
            if(arr[i]<0){
                arrn.push_back(arr[i]);
            }else{
                arrp.push_back(arr[i]);
            }
        }
        int i=0,j=0;
        while(i<n && j<arrn.size()){
            arr[i]=arrn[j];
            i++, j++;
        }
         j=0;
        while(i<n && j<arrp.size()){
            arr[i]=arrp[j];
            i++,j++;
        }
        }
};