#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int s, p;
	cin >> s >> p;
	vector<int> seg1(s), seg2(s);
	for (int i = 0; i < s; i++)
	{
		cin >> seg1[i] >> seg2[i];
	}
	sort(seg1.begin(), seg1.end());
	sort(seg2.begin(), seg2.end());

	for (int i = 0; i < p; i++)
	{
		int a;
		cin >> a;

		vector<int>::iterator left = upper_bound(seg1.begin(), seg1.end(), a);
		vector<int>::iterator right = upper_bound(seg2.begin(), seg2.end(), a-1);

		cout << (left - seg1.begin()) - (right - seg2.begin()) << " ";
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