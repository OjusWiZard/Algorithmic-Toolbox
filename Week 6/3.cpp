#include<bits/stdc++.h>

using namespace std ;

long long operate(long long a, char optr, long long b)
{
	switch(optr)
	{
		case '+':
			return a + b;
			break;
		case '*':
			return a * b;
			break;
		case '-':
			return a - b;
			break;
	}
	return 0;
}

struct minMax
{
	long long mi, ma;
	minMax(long long &minN, long long &maxN)
	{
		this->mi = minN;
		this->ma = maxN;
	}
};

minMax minMaxCalc(int i, int j, vector<char> &oprtr, vector<vector<long long>> &m, vector<vector<long long>> &M)
{
	long long minN = LONG_MAX;
	long long maxN = LONG_MIN;

	for (int k = i; k < j; k++)
	{
		long long a = operate(M[i][k], oprtr[k], M[k + 1][j]);
		long long b = operate(M[i][k], oprtr[k], m[k + 1][j]);
		long long c = operate(m[i][k], oprtr[k], M[k + 1][j]);
		long long d = operate(m[i][k], oprtr[k], m[k + 1][j]);

		minN = min({minN, a, b, c, d});
		maxN = max({maxN, a, b, c, d});
	}

	return minMax(minN, maxN);
}

void  solve()
{
	string exp;
	cin >> exp;
	vector<int> operand;
	vector<char> operatr;
	for( char c:exp )
	{
		if( !c )
			break;
		else if( '0'<=c && c<='9' )
			operand.push_back(c - '0');
		else
			operatr.push_back(c);
	}

	vector<vector<long long>> m(operand.size(), vector<long long>(operand.size())), M(operand.size(), vector<long long>(operand.size()));

	for (int i = 0; i < operand.size(); i++)
	{
		m[i][i] = operand[i];
		M[i][i] = operand[i];
	}
	
	for (int s = 1; s <= operand.size(); s++)
	{
		for (int i = 0; i < operand.size()-s; i++)
		{
			int j = i + s;
			minMax mM = minMaxCalc(i, j, operatr, m, M);
			m[i][j] = mM.mi;
			M[i][j] = mM.ma;
		}
	}

	cout << M[0][M.size() - 1];
}

int main()
{
	int t ;
	t = 1 ;
	while( t-- )
		solve();
}