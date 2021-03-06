int minSwaps(vector<int>&nums){
	    
	    // Code here
	    
	    vector<pair<int,int>>v;
	    
	    for(int i=0;i<nums.size();i++)
	    {
	        v.push_back(make_pair(nums[i],i));
	    }
	    
	    sort(v.begin(),v.end());
	    
	    vector<bool>vis(nums.size(),false);
	    
	    int ans=0;
	    for(int i=0;i<nums.size();i++)
	    {
	        if(v[i].second==i || vis[i])
	        {
	            continue;
	        }
	        
	        int j=i;
	        int curr_cyclesize=0;
	        
	        while(!vis[j])
	        {
	            vis[j]=true;
	            
	            j=v[j].second;
	            curr_cyclesize++;
	        }
	        
	        if(curr_cyclesize>0){
	        ans+=(curr_cyclesize-1);
	        }
	    }
	    
	    return ans; 
	    
	}
