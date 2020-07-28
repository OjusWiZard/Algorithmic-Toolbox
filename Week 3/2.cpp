#include<bits/stdc++.h>

using namespace std ;

bool comp( pair<int,int> a, pair<int,int> b )
{
	return (double)a.first / a.second > (double)b.first / b.second;
}

void  solve()
{
	int n, W ;
	double ans = 0;
	cin >> n >> W;
	vector<pair<int, int>> item(n);
	for (int i = 0; i < n; i++)
	{
		cin >> item[i].first >> item[i].second;
	}

	sort(item.begin(), item.end(), comp);

	int i;
	for ( i = 0; i < item.size(); i++)
	{
		if( W-item[i].second<0 )
			break;

		W -= item[i].second;
		ans += item[i].first;
	}

	if( i<item.size() )
		ans += (double)W * item[i].first / item[i].second;

	cout << fixed << setprecision(4) << ans;
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