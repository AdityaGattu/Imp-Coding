//https://www.codechef.com/problems/MATXOR

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long n,m,k;
	    cin>>n>>m>>k;
	    
	    long long ans=0;
	    
	    for(long long i=1;i<n;i++){
	        
	        if(min(i,m)%2==1){    // first column see all diagnol elements if no of ele along diagnol are odd 
	                              // we can include in ans;
	            ans^=k+i+1;}
	    }
	    
	    for(long long j=1;j<=m;j++){
	        if(min(m-j+1,n)%2==1)   // see all last row elements all diagnol if no of ele along diagnol are odd 
	                              // we can include in ans;
	        {ans^=k+j+n;}
	    }
	    
	    cout<<ans<<"\n";
	}
	
	return 0;
}

//time complexity : O(n+m)
