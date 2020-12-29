#include<bits/stdc++.h>
#include <iostream>
using namespace std;


bool alr_vis[100005];
vector<int>al[100005];
int pos[100005];	// to know node is poisions or not
int ans=0;
int n,m;

void dfs(int curr,int val)
{
    alr_vis[curr]=true;
    int temp;
    if(pos[curr]==0)  //if curr node is poisonous change temp value to 0
    {
        temp=0;
    }
    else{temp=val+1;} // inc if poisonous
    
    if(temp>=m) //if poisionus limit > m stops dfs execution
    {return;}
    
    int is_leaf=0;
    for(auto opt:al[curr])
    {
        if(alr_vis[opt])
        {
            continue;
        }
        is_leaf++;
        dfs(opt,temp);
    }
    if(is_leaf==0) //if leaf node no adjacent nodes so is_leaf=0 inc ans.
    {
        ans++;
    }
}

int main() {
	// your code goes here
	

	    cin>>n>>m;
	  
	    for(int i=1;i<=n;i++)
	    {
	        cin>>pos[i];
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        int u,v;
	        cin>>u>>v;
	        al[u].push_back(v);
	        al[v].push_back(u);
	    }
	    
	    dfs(1,0);
	    
	    cout<<ans;

	return 0;
}
