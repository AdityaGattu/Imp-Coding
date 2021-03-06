public:
    int isCircle(int N, vector<string> A)
    {
        // code here
        map<char,int>m;
        for(int i=0;i<N;i++)
        {
            string s=A[i];
            
            m[s[0]]++;
        }
        for(int i=0;i<N;i++)
        {
            string s=A[i];
            
            if(m[s[A[i].length()-1]]==0)return 0;
            
            m[s[A[i].length()-1]]--;
        }
        return 1;
       
    }
