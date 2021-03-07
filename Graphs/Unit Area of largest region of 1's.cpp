public:

    bool issafe(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& vis)
    {
        if( i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1 && !vis[i][j] )return true;
        else{return false;}
    }
    

    void dfs(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& vis,int& count)
    {
        vis[i][j]=true;
        
        int rowno[]={-1,-1,-1,0,0,1,1,1};
        int colno[]={-1,0,1,-1,1,-1,0,1};
        
        for(int k=0;k<8;k++)
        {
            if(issafe(grid,i+rowno[k],j+colno[k],vis))
            {
                count++;
                dfs(grid,i+rowno[k],j+colno[k],vis,count);
            }
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        
        int rows=grid.size();
        int cols=grid[0].size();
        
        vector<vector<bool>>vis(rows,vector<bool>(cols,false));
        
        int res=-1;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                {
                    int count=1;
                    dfs(grid,i,j,vis,count);
                    
                    res=max(res,count);
                }
            }
        }
        return res;
    }

// Expected Time Complexity: O(n*m)
// Expected Auxiliary Space: O(n*m)
