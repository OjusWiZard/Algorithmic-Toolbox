#include <bits/stdc++.h>

using namespace std;

void partition(vector<int> &a, int l, int r, int &i, int &j)
{
	if (r - l <= 1)
	{
		if (a[r] < a[l])
			swap(a[r], a[l]);
		i = l;
		j = r;
		return;
	}
	int m = l;
	int p = a[r];
	while (m <= r)
	{
		if (a[m] < p)
			swap(a[l++], a[m++]);
		else if (a[m] == p)
			m++;
		else if (a[m] > p)
			swap(a[m], a[r--]);
	}
	i = l - 1;
	j = m;
}
void quicksort(vector<int> &a, int l, int r)
{
	if (l >= r)
		return;
		
	int i, j;
	partition(a, l, r, i, j);
	quicksort(a, l, i);
	quicksort(a, j, r);
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); ++i)
	{
		cin >> a[i];
	}
	quicksort(a, 0, a.size() - 1);
	for (size_t i = 0; i < a.size(); ++i)
	{
		cout << a[i] << ' ';
	}
}