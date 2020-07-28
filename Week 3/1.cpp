#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int m, fives, tens;
	cin >> m;
	tens = m / 10;
	m %= 10;
	fives = m / 5;
	m %= 5;
	cout << m + fives + tens;
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