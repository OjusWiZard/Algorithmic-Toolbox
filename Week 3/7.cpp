#include<bits/stdc++.h>

using namespace std ;

bool comp( string a, string b )
{
	return a + b > b + a;
}

void  solve()
{
	int n;
	cin >> n;
	vector<string> nums(n);
	for (int i = 0; i < n; i++)
	{
		cin>>nums[i];
	}

	sort(nums.begin(), nums.end(), comp);

	for (int i = 0; i < n; i++)
	{
		cout << nums[i];
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