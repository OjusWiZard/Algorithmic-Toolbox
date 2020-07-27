#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
	return (a * b) / gcd(a, b);
}

void solve()
{
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b);
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