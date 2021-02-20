class Solution {
public:

        int countVowelPermutation(int n) {
      
	long long mod = 1000000007; // if no>1e9

	vector<long long>dp(6, 1);        // intial dp for single string aphabelts
	vector<long long>curdp(6, 0);     // for updation


	if (n == 1) {return 5;} 

	for (int i = 1; i < n ; i++)                    //  1->a  2->b 3->c 4->d 5->e
	{
		curdp[1] = ((dp[2] + dp[3]) % mod + dp[5]) % mod;           // append a only if previous values(last character) are e or i or o this give no of a's in nxt iterartion
		curdp[2] = (dp[1] + dp[3]) % mod;                           // append e only if previous values are a or i
  		curdp[3] = ((dp[2] + dp[4]) % mod);			   // append i only if previous values	are e or o
		curdp[4] = (dp[3]) % mod;			           // append o only if previous values is i 
 		curdp[5] = (dp[4] + dp[3]) % mod;		           // append u only if previous values are i or o

		for (int ii = 1; ii <= 5; ii++)
		{
			dp[ii] = curdp[ii] % mod;
		}
	}

	return (((dp[1] + dp[2]) % mod + (dp[3] + dp[4]) % mod) % mod + dp[5]) % mod;
    }
 
        
};
