#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n;
	long long rev = 0;
	cin >> n;
	vector<int> profit(n), clicks(n);
	for (int i = 0; i < n; i++)
	{
		cin >> profit[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> clicks[i];
	}
	sort(profit.begin(), profit.end());
	sort(clicks.begin(), clicks.end());

	for (int i = 0; i < n; i++)
	{
		rev += (long long)profit[i] * clicks[i];
	}

	cout << rev;
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