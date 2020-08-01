#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int W, n;
	cin >> W >> n;
	vector<vector<long long>> dp(n + 1, vector<long long>(W + 1));
	for (int i = 0; i < n; i++)
	{
		cin >> dp[i+1][0];
	}

	for (int i = 1; i <= W; i++)
	{
		long long maxW = dp[0][i - 1], usedJ;
		bool used = false;
		for (int j = 1; j <= n; j++)
		{
			long long possibleW = dp[j][0];
			if(i>=possibleW)
			{
				if( dp[j][i-possibleW]>0 )
				{
					if( dp[0][i-possibleW]+possibleW>maxW )
					{
						maxW = dp[0][i - possibleW] + possibleW;
						usedJ = j;
						used = true;
					}
				}
			}
		}
		dp[0][i] = maxW;
		for (int j = 1; j <= n; j++)
		{
			dp[j][i] = dp[j][i-1];
		}
		if(used)
		{
			for (int j = 1; j <= n; j++)
			{
				dp[j][i] = dp[j][i - dp[usedJ][0]];
			}
			dp[usedJ][i] = 0;
		}
	}
	
	cout << dp[0][W];
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	t = 1 ;
	while( t-- )
		solve();
}