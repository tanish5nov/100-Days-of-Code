class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>ans;
        vector<int>degree(V,0);
        for(int i=0;i<V;i++)
        for(int ele:adj[i])
        degree[ele]++;
        
        queue<int>q;
        for(int i=0;i<V;i++)
        if(degree[i]==0)
        q.push(i);
        
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(int ele:adj[temp])
            {
                degree[ele]-- ;
                if(degree[ele]==0)
                q.push(ele);
                
            }
        }
        
        return ans;
	}
};
