 class  Solution {
public:

 int issafe(vector<vector<char>>& grid,int row,int col,vector<vector<int>>& vis)
    {
        return (row>=0 && row<grid.size()) && (col>=0 && col<grid[0].size()) && (grid[row][col]=='1' && !vis[row][col]);
        
    }
    
    void dfs(vector<vector<char>>& grid,int row,int col,vector<vector<int>>& vis)
    {
        static int rowno[]={-1,-1,-1,0,0,1,1,1};
        static int colno[]={-1,0,1,-1,1,-1,0,1,};
        
        vis[row][col]=1;
        
        for(int i=0;i<8;i++)
        {
            if(issafe(grid,row+rowno[i],col+colno[i],vis))
            {
                dfs(grid,row+rowno[i],col+colno[i],vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        
        int rows=grid.size();
        int cols=grid[0].size();
        
        
        vector<vector<int>>vis(rows,vector<int>(cols,0));
        
        int count=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    dfs(grid,i,j,vis);
                    ++count;
                }
            }
        }
        
        return count;
        
    }
    };
