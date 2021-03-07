bool dfs_cycle(int node,vector<int> adj[],vector<bool>& vis,vector<int>& onpath)
    {
        if(vis[node]==true)
        {
            return false;
        }
        vis[node]=true;
        onpath[node]=true;
        for(auto neigh:adj[node])
        {
            if(onpath[neigh] || dfs_cycle(neigh,adj,vis,onpath))
            {return true;}
        }
        return onpath[node]=false;
        
        
    }
bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
	    vector<int>onpath(V,false);
	    vector<bool>vis(V,false);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(dfs_cycle(i,adj,vis,onpath))
	            return true;
	        }
	    }
	    return false;

}

//Expected Time Complexity: O(V + E)
//Expected Auxiliary Space: O(V)
