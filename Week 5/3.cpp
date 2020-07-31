#include<bits/stdc++.h>

using namespace std ;

int editDistance( string &s1, string &s2 )
{
	vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1));

	for (int i = 0; i <= s1.size(); i++)
		dp[i][0] = i;
	for (int i = 0; i <= s2.size(); i++)
		dp[0][i] = i;
	
	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < s2.size(); j++)
		{
			dp[i + 1][j + 1] = min(1 + min(dp[i][j + 1], dp[i + 1][j]), dp[i][j] + (int)(s1[i] != s2[j]));
		}
	}

	return dp[s1.size()][s2.size()];
}

void  solve()
{
	string s1, s2;
	cin >> s1 >> s2;

	cout << editDistance(s1, s2);
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