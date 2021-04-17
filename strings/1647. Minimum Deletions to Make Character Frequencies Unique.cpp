#include<bits/stdc++.h>
class Solution {
public:
    int minDeletions(string s1) {
        
        map<char,int>m;
        
        for(int i=0;i<s1.size();i++){
            m[s1[i]]++;
        }
        
        set<int>s;
        int setsize_before;
        int cnt=0;
        for(auto itr:m){
            setsize_before=s.size();
            s.insert(itr.second);
            if(s.size()>setsize_before){
                continue;
            }
            else{
                while(itr.second>0 && s.size()==setsize_before){
                    itr.second--;
                    cnt++;
                    if(itr.second>0){
                        s.insert(itr.second);
                    }
                }
                
            }
        }
        
        return cnt;
        
    }
    
};
