#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int c=0;
vector<int>al[100005];

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	     	int n,m,k;
	        cin>>n>>m>>k;
        	for(int i=0;i<m;i++)
	        {
	        int u,v;
	        cin>>u>>v;
	        al[u].push_back(v);
	        al[v].push_back(u);
	        }
	        
	        
	        for(int i=0;i<n;i++)
	        {
	            if(al[i].size()==1)
	            {
	                c++;
	            }
	        }
	        cout<<(n-c)*k;
	        
	        for(int i=0;i<n;i++)
	        {
	            al[i].clear();
	        }
	        c=0;
	        
	 }
	
	return 0;
}
