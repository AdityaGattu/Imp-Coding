
// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    
    // Your code here
    
    long long currsum=arr[0];
    
    int start=0;
    vector<int>v;
    
    for(int i=1;i<=n;i++)       //  adding currsum till a[n-1] and then for final check 
                                //  after adding last element , in order to  check currsum==s 
                                //  we are doing final iteration 
    {
        while(currsum>s && start<i-1)     // we can also write while(currsum>s) also since window can size 0 also;  
        {
            currsum-=arr[start];          // if currsum>s remove elee from left end along with
            start++;                     // checking if window consists of atleast one element 
        }
        
        if(currsum==s)
        {
            v.push_back(start+1);
            v.push_back(i);
            break;
        }
        
        if(i<n)
        currsum+=arr[i];
    }
    if(v.size()==0){v.push_back(-1);}
    return v;
}
