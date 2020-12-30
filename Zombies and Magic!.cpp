#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool vis[100005];
vector<int>al[100005];

vector<int>arr;

void dfs(int curr)
{
    vis[curr]=true;
    
    arr.push_back(curr);
    
    for(auto opt:al[curr])
    {
        if(vis[opt])
        {
            continue;
        }
        else
        {
            dfs(opt);
        }
        
    }
}




int main() {
	// your code goes here
	
	int n,m,z;
	
	cin>>n>>m>>z;
	
	for(int i=0;i<m;i++)
	{
	    int u,v;
	    
	    cin>>u>>v;
	    if(u!=z &&v!=z)    // store all edges that do not have z as node
	    {
	    al[u].push_back(v);
	    al[v].push_back(u);
	    }
	    
	}
	
	dfs(0);  //perform dfs on starting node and check if they reach all node except node z = n-1
	
	
	if(arr.size()==n-1)cout<<"yes";
	else cout<<"no";
	return 0;
}
