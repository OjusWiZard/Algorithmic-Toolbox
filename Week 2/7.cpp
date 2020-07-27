#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long long fib, a = 1, b = 0, n, sum1 = 0, sum2 = 0;

	cin >> n;
	n--;
	n %= 60;
	n = max((long long)0, n);
	while (n--)
	{
		fib = (a + b)%10;
		b = a;
		a = fib;
		sum1 += b;
		sum1 %= 100;
	}

	cin >> n;
	n %= 60;
	a = 1;
	b = 0;
	while (n--)
	{
		fib = (a + b)%10;
		b = a;
		a = fib;
		sum2 += b;
		sum2 %= 100;
	}
	int ans = (sum2 - sum1) % 10;
	if( ans<0 )
		ans += 10;
	cout << ans ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	t = 1;
	while (t--)
		solve();
}