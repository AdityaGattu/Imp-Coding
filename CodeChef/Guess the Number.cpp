//https://www.codechef.com/problems/GUESSIT

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    for(int i=1;i<=1000;i++){
	        cout<<i*i<<"\n";
	        int ans;
	        cin>>ans;
	        if(ans==1){break;}        // that is out guess is right
	    }
	    
	}
	return 0;
}
