#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m, l;
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
	cin >> l;
	vector<int> num3(l);
	for (int i = 0; i < l; i++)
	{
		cin >> num3[i];
	}

	vector < vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(l + 1)));
	for (int i = 0; i < n + 1; i++)
	{
		dp[i][0][0] = 0;
	}
	for (int i = 0; i < m + 1; i++)
	{
		dp[0][i][0] = 0;
	}
	for (int i = 0; i < l; i++)
	{
		dp[0][0][i] = 0;
	}
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < l; k++)
			{
				if (num1[i] == num2[j] && num2[j] == num3[k])
					dp[i + 1][j + 1][k + 1] = dp[i][j][k] + 1;
				else
					dp[i + 1][j + 1][k + 1] = max(max(dp[i][j + 1][k + 1], dp[i + 1][j][k + 1]), dp[i + 1][j + 1][k]);
			}
		}
	}
	cout << dp[n][m][l];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	t = 1;
	while (t--)
		solve();
}