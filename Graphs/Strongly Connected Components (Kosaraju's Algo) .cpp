public:
	/*  Function to find the number of strongly connected components
    *   using Kosaraju's algorithm
    *   V: number of vertices
  
    *   adj[]: array of vectors to represent graph
    */
    stack<int>s;
    void dfs(int node,vector<bool> &vis,vector<int> adj[])
    {
        vis[node]=true;
        for(auto neigh:adj[node])
        {
            if(!vis[neigh])
            {
                dfs(neigh,vis,adj);
            }
        }
        s.push(node);
        
    }
    
    void revdfs(int node,vector<bool>& vis1,vector<int> trans_adj[])
    {
        vis1[node]=true;
        for(auto neigh:trans_adj[node])
        {
            if(!vis1[neigh])
            {
                revdfs(neigh,vis1,trans_adj);
            }
        }
    }
    
    int kosaraju(int V, vector<int> adj[]) {
        //code here
        
        vector<bool>vis(V,false);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
            }
        }
        
        vector<int> trans_adj[V];
        
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                trans_adj[it].push_back(i);
            }
        }
        
        vector<bool>vis1(V,false);
        int count=0;
        
        while(!s.empty())
        {
            int ver=s.top();
            s.pop();
            
            if(!vis1[ver])
            {
                revdfs(ver,vis1,trans_adj);
                count++;
            }
        }
        return count;
        
    }
