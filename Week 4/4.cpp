#include<bits/stdc++.h>

using namespace std ;

int merge(vector<int>::iterator l, vector<int>::iterator m, vector<int>::iterator r)
{
	int res = 0	;
	queue<int> temp;
	vector<int>::iterator i = l, j = m;
	while (i<m && j<r)
	{
		if(*i<=*j)
		{
			temp.push(*i);
			i++;
		}
		else
		{
			temp.push(*j);
			j++;
			res += m - i;
		}
	}
	while (i<m)
	{
		temp.push(*i);
		i++;
	}
	while (j<r)
	{
		temp.push(*j);
		j++;
	}
	while (!temp.empty())
	{
		*l = temp.front();
		l++;
		temp.pop();
	}
	return res;
}

int mergeSort(vector<int>::iterator l, vector<int>::iterator r)
{
	int res = 0;
	if(1+l<r)
	{
		vector<int>::iterator m = l + (r - l) / 2;
		res = mergeSort(l, m);
		res += mergeSort(m, r);
		res += merge(l, m, r);
	}
	return res;
}

void  solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << mergeSort(a.begin(), a.end());
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