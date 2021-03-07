public:
    int minThrow(int N, int arr[]){
        // code here
        
        vector<int>graph(30,-1);
        
        for(int i=0;i<(2*N);i+=2)
        {
            graph[arr[i]-1]=arr[i+1]-1;
            
        }
        
        queue<pair<int,int>>q;
        
        vector<bool>vis(30,false);
        
        vis[0]=true;
        
        q.push(make_pair(0,0));
        
        pair<int,int>p;
        while(!q.empty())
        {
            p=q.front();
            
            int ver=p.first;
            q.pop();
            
            
            if(ver==29)break;
            
            for(int j=ver+1;j<=ver+6 && j<30;j++)
            {
                
                if(!vis[j]){
                
                vis[j]=true;
                int currver;
                int currdis=p.second+1;
               
                if(graph[j]==-1)
                {currver=j;}
                else
                {currver=graph[j];}
                 
                q.push({currver,currdis});}
            }
        }
        return p.second;
        
    }
 
//Expected Time Complexity: O(N)  // for loop 6 * N(max elements in queue) -> 6N =N;
//Expected Auxiliary Space: O(N)
