// Function to find equilibrium point in the array.
// a: input array
// n: size of array
int equilibriumPoint(long long arr[], int size) {

    // Your code here
    
    long long sum=0;
    for(int i=0;i<size;i++) 
    {
        sum+=arr[i];          // total sum of array
    }
    
    long long leftsum=0;
    
    for(int i=0;i<size;i++)
    {
        sum-=arr[i];         // at each point we check that point is equilibrium point or not.
                             //calculate its right sum by subtracting current element
        
        if(leftsum==sum)     //check if leftsum = rightsum
        {
            return i+1;      //return its position
        }
        
        leftsum+=arr[i];
    }
    
    return -1;
    
}
