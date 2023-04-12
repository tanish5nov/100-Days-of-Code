class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {   
        vector<int>ans;
        int count=0;
        int total_element=n*m;
        
        int startingRow=0;
        int endingCol=m-1;
        int endingRow=n-1;
        int startingCol=0;
        
        while(count< total_element){
            
            //traverse starting row
            for(int i=startingCol; i<=endingCol && count<total_element; i++){
                ans.push_back(a[startingRow][i]);
                count++;
            }
            
            startingRow++;
            
            //traverse ending col
            for(int i=startingRow; i<=endingRow && count<total_element; i++){
                ans.push_back(a[i][endingCol]);
                count++;
            }
            
            endingCol--;
            
            //traverse ending row
            for(int i=endingCol; i>=startingCol && count<total_element; i--){
                ans.push_back(a[endingRow][i]);
                count++;
            }
            
            endingRow--;
            
            //traverse starting col
            for(int i=endingRow; i>=startingRow && count<total_element; i--){
                ans.push_back(a[i][startingCol]);
                count++;
            }
            
            startingCol++;
        }
        
        return ans[k-1];
    }

};
