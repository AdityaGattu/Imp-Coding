
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    // Your code goes here
    
    
    map<int,int>m1;
    set<int>s;
    
    for(int i=0;i<n;i++)
    {
        m1[a[i]]++;
    }
    
    int cnt=0;
    
    
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        
        if(m1[*itr]>=1)
        cnt++;
    }
    
    
    return cnt;
}
