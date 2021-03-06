 public:
    
    string common(string s1,string s2)
    {
        int l=min(s1.length(),s2.length());
        
        string curr_common;
        for(int i=0;i<l;i++)
        {
        if(s1[i]!=s2[i])break;
        curr_common+=s1[i];
        }
        return curr_common;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        string prefix=arr[0];
        
        for(int i=1;i<N;i++)
        {
            prefix=common(prefix,arr[i]);
        }
        if(prefix=="")return "-1";
        return prefix;
    }

// time complexity : O(n*max|arri|)
//space complexity : O(max|arri|) ->for result
