#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n;
	cin >> n;
	int remaining = n;
	vector<int> candy;
	for (int i = 1; remaining>=i ; i++)
	{
		remaining -= i;
		candy.push_back(i);
	}
	if( remaining )
	{
		int last = candy[candy.size() - 1];
		candy.pop_back();
		candy.push_back(last + remaining);
	}

	cout << candy.size() << "\n";
	for (int i = 0; i < candy.size(); i++)
	{
		cout << candy[i] << " ";
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