public:
    int parent[100005];
    bool dfs_cycle(int node,int p,vector<bool>& vis,vector<int> adj[])
    {
        vis[node]=true;
        parent[node]=p;
       
        for(auto neigh:adj[node])
        {
            if(neigh==p){continue;}
            if(!vis[neigh])
            {
                if(dfs_cycle(neigh,node,vis,adj))return true;
            }
            else
            {
                //there exixts a back edge
                return true;
            }
        }
        
    }
	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	   
	    vector<bool>vis(V,false);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(dfs_cycle(i,i,vis,adj))
	            {return true;}
	        }
	    }
	    return false;
	}
