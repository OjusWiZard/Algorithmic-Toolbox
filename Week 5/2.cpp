#include<bits/stdc++.h>

using namespace std ;

void recursiveSteps( int n, vector<int> &op )
{
	if( n!=0 )
	{
		if( n%3==0 && op[n]-op[n/3]==1 )
			recursiveSteps(n / 3, op);
		else if (n % 2 == 0 && op[n] - op[n / 2] == 1)
			recursiveSteps(n / 2, op);
		else if( op[n]-op[n-1]==1 )
			recursiveSteps(n - 1, op);
		cout << n << " ";
	}
}

void  solve()
{
	int n;
	cin >> n;
	vector<int> operations = {0};

	for (int i = 1; i <= n; i++)
	{
		int oprtn = INT_MAX;
		if( i%2==0 )
			oprtn = min(oprtn, 1 + operations[i / 2]);
		if( i%3==0 )
			oprtn = min(oprtn, 1 + operations[i / 3]);
		oprtn = min(oprtn, 1 + operations[i - 1]);
		operations.push_back(oprtn);
	}

	cout << operations[n]-1 << "\n";
	recursiveSteps(n, operations);
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