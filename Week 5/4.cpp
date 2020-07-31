#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n, m;
	cin >> n;
	vector<int> num1(n);
	for (int i = 0; i < n; i++)
	{
		cin >> num1[i];
	}
	cin >> m;
	vector<int> num2(m);
	for (int i = 0; i < m; i++)
	{
		cin >> num2[i];
	}

	vector<vector<int>> dp(n + 1, vector<int>(m + 1));
	for (int i = 0; i < n+1; i++)
	{
		dp[i][0] = 0;
	}
	for (int i = 0; i < m+1; i++)
	{
		dp[0][i] = 0;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if( num1[i]==num2[j] )
				dp[i + 1][j + 1] = dp[i][j] + 1;
			else
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
		}
	}
	cout << dp[n][m];
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