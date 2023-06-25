class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>> ans;
      map<vector<int>,bool> m;
      for(int i=0;i<row;i++)
      {
         vector<int> v;
          for(int j=0;j<col;j++)
          {
            v.push_back(M[i][j]);
          }
         if(m[v]==false)
         {
            ans.push_back(v);
            m[v]=true;
         }
      }
      return ans;
    }
};
