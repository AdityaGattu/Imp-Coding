 int canReach(long long a, long long b, long long x) {
        // code here
        
        if(x<abs(a)+abs(b))   // x is no of steps;
                              // to reach a,b from 0,0 shatest steps = |A|+|B| so if no of steps less then this not possible.
                              
        {return 0;}
        
        if(x>=abs(a)+abs(b))  //if greater after sutraction if u have still more steps u can go front and then back reach destination.
        {                    // hence must be mutiple of 2.
            if((x-abs(a)-abs(b))%2==0) return true;
            return false;
        }
    }


Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
