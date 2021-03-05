public:


    bool dfs_cycle(vector< unordered_set<int> >& graph,int node,vector<bool>& onpath,vector<bool>& visited)
    {
        if(visited[node])
        {
            return false;
        }
        onpath[node]=visited[node]=true;
        
        for(int neigh:graph[node])
        {
            if(onpath[neigh] || dfs_cycle(graph,neigh,onpath,visited))
            {return true;}
        }
        return onpath[node]=false;
    }
    
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    int n=N;
	    vector< unordered_set<int> > graph(n);
	    vector<bool>visited(n,false);
	    vector<bool>onpath(n,false);
	    
	    for(auto itr: prerequisites)
	    {
	        graph[itr.second].insert(itr.first);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(!visited[i] && dfs_cycle(graph,i,onpath,visited))
	        {
	            return false;
	        }
	    }
	    return true;
	    
	    
	}
};
