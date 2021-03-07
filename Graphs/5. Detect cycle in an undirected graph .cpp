public:
    int parent[100005];
    int flag=0;
    void dfs_cycle(int node,int p,vector<bool>& vis,vector<int> adj[])
    {
        vis[node]=true;
        parent[node]=p;
       
        for(auto neigh:adj[node])
        {
            if(neigh==p){continue;}
            if(!vis[neigh])
            {
                dfs_cycle(neigh,node,vis,adj);
            }
            else
            {
                //there exixts a back edge
                flag=1;
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
	            dfs_cycle(i,i,vis,adj);
	        }
	    }
	    if(flag==1)return true;
	    return false;
	}

//Expected Time Complexity: O(V + E)
//Expected Space Complexity: O(V)
