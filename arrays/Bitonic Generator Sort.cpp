#include<bits/stdc++.h>
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
		// Your code goes here
		
		vector<int>even;
		vector<int>odd;
		
		for(int i=0;i<n;i++)
		{
		    if(i%2==0)
		    {even.push_back(arr[i]);}
		    else
		    {odd.push_back(arr[i]);}
		}
		
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end(),greater<int>());
		
		int i=0;
		for(i=0;i<even.size();i++)
		{
		    arr[i]=even[i];
		}
		int k=0;
		for(int j=i;j<i+odd.size();j++)
		{
		    arr[j]=odd[k];
		    k++;
		}
	}
		 

};
