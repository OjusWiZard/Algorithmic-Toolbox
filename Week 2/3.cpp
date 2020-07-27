#include<bits/stdc++.h>

using namespace std ;

int gcd(int a, int b)
{
	if( a<b )
		swap(a, b);
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void solve()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b);
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