class Solution {
public:

        int countVowelPermutation(int n) {
        
            
            
	long long mod = 1000000007;

	vector<long long>dp(6, 1);
	vector<long long>curdp(6, 0);


	if (n == 1) {return 5;}

	for (int i = 1; i < n ; i++)
	{
		curdp[1] = ((dp[2] + dp[3]) % mod + dp[5]) % mod;
		curdp[2] = (dp[1] + dp[3]) % mod;
		curdp[3] = ((dp[2] + dp[4]) % mod);
		curdp[4] = (dp[3]) % mod;
		curdp[5] = (dp[4] + dp[3]) % mod;

		for (int ii = 1; ii <= 5; ii++)
		{
			dp[ii] = curdp[ii] % mod;
		}
	}

	return (((dp[1] + dp[2]) % mod + (dp[3] + dp[4]) % mod) % mod + dp[5]) % mod;
    }
 
        
};
