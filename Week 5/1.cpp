#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int money;
	cin >> money;
	vector<int> change = {0}, coins = {1, 3, 4};

	for (int i = 1; i <= money; i++)
	{
		int minCoins = INT_MAX;
		for (int j = 0; j < coins.size(); j++)
		{
			if( i>=coins[j] )
			{
				minCoins = min(minCoins, change[i - coins[j]] + 1);
			}
		}
		change.push_back(minCoins);
	}
	cout << change[money];
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