
//Function to find the leaders in the array.
vector<int> leaders(int a[], int n){

    // code here
    
    int maxfromright=a[n-1];  //since last element is always a leader in array
    
    vector<int>v;
    
    for(int i=n-1;i>=0;i--)   //start from right end to store max from right side and compare 
                              // with cuurent element and if current ele > max from right print it.
    {
        if(a[i]>=maxfromright)
        {
            v.push_back(a[i]);
            maxfromright=a[i];
        }
    }
    reverse(v.begin(),v.end());  // takes O(n) time
    return v;
}
