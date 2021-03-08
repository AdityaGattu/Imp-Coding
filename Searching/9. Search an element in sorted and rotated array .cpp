
int binser(vector<int>& vec)
{
    
    int start=0;
    int end=vec.size()-1;
    int n=vec.size()-1;
    int res=-1;
    while(start<=end)
    {
        
         if(vec[start] <= vec[end]){
                    return start;
             } 
        int mid= start+((end-start)/2);
        
        if(vec[mid]<=vec[(mid+1)%n] && vec[mid]<=vec[(mid-1+n)%n])
        {
            res=mid;break;
        }
        
        else if(vec[mid]>=vec[start])
        {
            start=mid+1;
        }
        
        else 
        {end=mid-1;}
    }
    return res;
}

int bs(vector<int> &v,int s,int e,int ele)
{
    while(s<=e)
    {
        int m=s+((e-s)/2);
        if(v[m]==ele)return m;
        
        else if(v[m]>ele){e=m-1;}
        else
        {
            s=m+1;
        }
    }
    return -1;
}
int Search(vector<int> vec, int K) {
    //code here
    
    int min_ind=binser(vec);
    
    int a=bs(vec,0,min_ind-1,K);
    int b=bs(vec,min_ind,vec.size()-1,K);
    
    return max(a,b);
}
