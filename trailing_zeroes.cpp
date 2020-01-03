#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	lli n; cin>>n;
	lli sum=0,temp=0;
	while(n>=5)
	{
		temp=n/5;
		sum=sum+temp;
		n=n/5;
	}
	cout<<sum;
	return 0;
}
