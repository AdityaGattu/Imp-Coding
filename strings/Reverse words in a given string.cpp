string reverseWords(string S) 
    { 
        // code here 
        
        stack<string>s;
        
        string temp="";
        for(int i=0;i<S.length();i++)
        {
            
            if(S[i]!='.')
            {
                temp+=S[i];
            }
            
            else
            {
                s.push(temp);
                temp="";
            }
        }
        if(temp!=""){s.push(temp);}
        
        string res="";
        
        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            string t=s.top();
            s.pop();
            res+=t;
            res+='.';
        }
        
        string final=s.top();
        s.pop();
        res+=final;
        
        return res;
            
        
    } 
