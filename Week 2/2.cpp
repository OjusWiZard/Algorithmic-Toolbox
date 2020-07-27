#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int fib, a=1, b=0, n;
	cin>> n ;
	while (n--)
	{
		fib = (a + b)%10 ;
		b = a ;
		a = fib ;
	}
	cout<<b ;
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