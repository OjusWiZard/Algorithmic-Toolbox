#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n;
	cin >> n;
	vector<pair<int, int>> seg(n);
	vector<int> points ;
	for (int i = 0; i < n; i++)
	{
		cin >> seg[i].second >> seg[i].first;
	}

	sort(seg.begin(), seg.end());

	for (int i = 0; i < n; i++)
	{
		swap(seg[i].first, seg[i].second);
	}
	points.push_back(seg[0].second);

	for (int i = 0, p = seg[0].second; i < n; i++)
	{
		if( seg[i].first>p || seg[i].second<p )
		{
			points.push_back(seg[i].second);
			p = seg[i].second;
		}
	}

	cout << points.size() << "\n";
	for (size_t i = 0; i < points.size(); i++)
	{
		cout << points[i] << " ";
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