class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int n=N;
        int carry;
        
        arr[n-1]+=1;
        carry = arr[n-1]/10;
        arr[n-1] = arr[n-1]%10;
        
        for(int i=n-2;i>=0;i--)
        {
            if(carry>0)
            {
                arr[i]+=carry;
                carry=arr[i]/10;
                arr[i]%=10;
            }
        }
        
        if(carry>0){arr.insert(arr.begin(),carry);}
        
        return arr;
        
    }
};
