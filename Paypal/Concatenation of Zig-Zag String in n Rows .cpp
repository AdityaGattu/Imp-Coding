#include <iostream>
using namespace std;

int main() {
	//code

	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n;
	    cin>>n;
	    
	    if(n==1){cout<<s<<"\n";}
	    
	    else{
	    string arr[n]; // array of strings in diff rows
	    
	    bool dir;
	    int row=0;
	    
	    for(int i=0;i<s.length();i++)
	    {
	        arr[row].push_back(s[i]);
	        
	        if(row==n-1){dir=false;} // reached last row reverse the direction 
	        if(row==0){dir=true;}   // first row directioin is downward
	        
	        if(dir)
	        {row++;}
	        else
	        {row--;}
	        
	    }
	    
	    
	    string res;           // append all strings at last
	    for(int i=0;i<n;i++)
	    {
	        res+=arr[i];
	    }
	    cout<<res<<"\n";}
	}
	return 0;
}
