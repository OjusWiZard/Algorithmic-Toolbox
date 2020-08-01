#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)


void  solve()
{
	ll fib, a = 1, b = 0, n, sum = 0;
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
	fast;

	int t ;
	t = 1 ;
	while( t-- )
		solve();
}