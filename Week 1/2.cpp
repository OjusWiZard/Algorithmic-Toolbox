#include<bits/stdc++.h>
using namespace std;

void  solve()
{
	long long n, max1=0, max2=0;
    cin>>n ;
    while (n--)
    {
        long long a;
        cin>>a;
        if( a>max1 )
        {
            if( a>max2 )
            {
                max1 = max2 ;
                max2 = a ;
            }
            else
            {
                max1 = a ;
            }
        }
    }
    
    cout<<max1*max2<<"\n";
}

int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie( NULL );

	int t=1;
	//cin>>t;
	while( t-- )
		solve();
}