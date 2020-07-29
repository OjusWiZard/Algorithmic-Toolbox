#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n, k;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int b;
		cin >> b;
		if( binary_search(a.begin(),a.end(),b) )
			cout << lower_bound(a.begin(), a.end(), b) - a.begin() << " ";
		else
			cout << "-1 ";
	}
	
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