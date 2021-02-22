
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0){cnt0++;}
            if(a[i]==1){cnt1++;}
            if(a[i]==2){cnt2++;}
        }
        
        int j=0;
        while(cnt0--)
        {a[j]=0;j++;}
        while(cnt1--)
        {a[j]=1;j++;}
        while(cnt2--)
        {a[j]=2;j++;}
    }
    
};
