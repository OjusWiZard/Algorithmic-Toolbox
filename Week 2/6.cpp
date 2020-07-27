#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	long long fib, a = 1, b = 0, n, sum = 0;
	cin >> n;
	n %= 60;
	while (n--)
	{
		fib = (a + b)%10;
		b = a;
		a = fib;
		sum += b;
		sum %= 10;
	}
	cout << sum;
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