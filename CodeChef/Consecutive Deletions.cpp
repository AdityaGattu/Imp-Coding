//

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    
	    vector<int>a(n+1,0);
	    vector<int>c(n+1,0);
	    
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	        c[i]=c[i-1]+a[i];
	   }
	   
	   long long ones;
	   long long min_ones=k;
	   for(int i=k;i<=n;i++){
	       ones = c[i]-c[i-k];
	       min_ones = min(min_ones,ones);
	   }
	   
	   long long ans;
	   ans= min_ones*(min_ones+1)/2 +(c[n]-min_ones);
	   
	   cout<<ans<<"\n";
	}
	return 0;
}
