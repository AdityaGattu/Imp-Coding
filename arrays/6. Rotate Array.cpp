class Solution{
    public:
    
    void reverse(int arr[],int low,int high)
    {
        while(low<high)
        {
            swap(arr[low],arr[high]);
            low++;high--;
        }
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        
        d%=n;
        
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
        // 1 2 3 4 5 6 7 -> actual array
        // 3 2 1 7 6 5 4 ->n reverse upto 1st k elements and also reverse next remaining elements also 
        // 4 5 6 7 1 2 3 -> reverse complete array finally.
        
    }
    
};
