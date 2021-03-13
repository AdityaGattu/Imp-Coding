class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        
        int start=0;
        int end=letters.size()-1;
        
        char res=letters[0]; // if if ele is at end of array <=target return first ele(since wrap around is allowed)  
        
        while(start<=end)
        {
            int mid= start+(end-start)/2;
            
            if(letters[mid]==target)
            {
                start=(mid+1);
            }
            
            else if(letters[mid]>target)
            {
                res=letters[mid];
                end=mid-1;
            }
            
            
            else if(letters[mid]<target)
            {
                start=mid+1;
            }
        }
        
        return res;
        
    }
};
