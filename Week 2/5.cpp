#include<bits/stdc++.h>

using namespace std ;

long long pisanoPeriod( long long m)
{
	vector<long long> fib = {1, 1};
	while (true)
	{
		fib.push_back((fib[fib.size() - 1] + fib[fib.size() - 2]) % m);
		if( equal(fib.begin(), fib.begin()+fib.size()/2, fib.begin()+fib.size()/2, fib.end()) )
			break;
	}
	return fib.size() / 2;
}

void  solve()
{
	long long n;
	int m;
	cin >> n >> m;
	n %= pisanoPeriod(m);

	long long fib, a = 1, b = 0;
	while (n--)
	{
		fib = (a + b) % m;
		b = a;
		a = fib;
	}
	cout << b;
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