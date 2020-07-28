#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int d, m, n, ans=0;
	cin >> d >> m >> n;
	vector<int> gas(n);
	for (int i = 0; i < n;i++)
		cin >> gas[i];
	gas.push_back(d);

	for (int i = 0, prev=0; i <= n; i++)
	{
		if( gas[i]-prev>m )
		{
			if( gas[i]-gas[i-1]>m )
			{
				cout << -1;
				return;
			}
			else
			{
				ans++;
				prev = gas[i-1];
				i--;
			}
		}
	}

	cout << ans;
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