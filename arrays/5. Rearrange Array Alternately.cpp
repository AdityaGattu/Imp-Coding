// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
//Function to rearrange  the array elements alternately.
void rearrange(long long *arr, int n) 
{ 
	
	// Your code here
	
    long long minind = 0;
	long long maxind = n-1;
	long long maximum = arr[maxind]+1;
	
	for(int i=0;i<n;i++)
	{
	    if(i%2==0)
	    {                                              // 1,2....9   (9%10)*10 + 1 => 1 used for later pupose
	        arr[i]+=(arr[maxind]%maximum)*maximum;        // adding current element is like remainder 
	                                // which can be later used for updatinng value at later index.
	        maxind--;
	    }
	    
	    else
	    {
	        arr[i]+=(arr[minind]%maximum)*maximum;      // odd places minvalue->(obtained from reaminder i.e 1 from previoius iteration) 
	                                                    //  then 1*10 + 2 =>12
	        minind++;
	    }
	    
	}
	
	for(int i=0;i<n;i++)
	{
	    arr[i]=arr[i]/maximum;           //extract exact values   12/10=> 1 extracted at 2nd place
	} 
	 
}
