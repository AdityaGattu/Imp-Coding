class Solution {
public:
    
    bool dfs_cycle(vector<unordered_set<int>>& graph,int node,vector<bool>& onpath,vector<bool>& visited)
    {
        if(visited[node]==true)
        {
            return false;
        }
        onpath[node]=true;
        visited[node]=true;
        
        for(auto neigh:graph[node])
        {
            if(onpath[neigh] || dfs_cycle(graph,neigh,onpath,visited) )
                return true;
        }
        return onpath[node]=false;
        
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector< unordered_set<int> >graph(numCourses);
        vector<bool>visited(numCourses);
        vector<bool>onpath(numCourses);
        
        for(int i=0;i<prerequisites.size();i++)
        {
            graph[prerequisites[i][1]].insert(prerequisites[i][0]);
        }
        
        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i] && dfs_cycle(graph,i,onpath,visited))
            {
                return false;
            }
        }
        return true;
        
    }

};
