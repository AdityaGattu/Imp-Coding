public:
    
    int c[100005];
    bool dfs(int node,int col,vector<bool>& vis,vector<int> adj[])
    {
        vis[node]=true;
        c[node]=col;
        
        for(auto neigh:adj[node])
        {
            if(!vis[neigh])
            {
                if(dfs(neigh,col^1,vis,adj)==false)return false;  // continue dfs on neighbour node, coloring with opposite color and checking if it is possible with 2 colors 
                                                                  // using below condition if that is false u can stop dfs there ifself and return false
            }
            else
            {
                if(c[neigh]==c[node])return false;        // visited neigh node color compared with curr node color if both are same grapg is not bipartite
            }
        }
        return true;
        
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    
	    vector<bool>vis(V,false);
	    int col=1;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(!dfs(i,col,vis,adj))return false;       // if any one compnent cannot be coloured then graph is not bipartite
	            
	        }
	    }
	    return true;
	    
	}
