#include<bits/stdc++.h>

using namespace std;

int main()
{
long long int n; cin>>n; while(n>0) { 

long long int a_size; cin>>a_size;

vector<long long int> v; v.resize(a_size);

for (long long int i = 0; i < a_size; ++i)
{
	cin>>v[i];
}

long long int initialposition; cin>>initialposition;
long long int temp=v[initialposition-1];
//cout<<temp<<endl;
sort(v.begin(), v.end()); 

vector<long long int>::iterator it; 

it=find(v.begin(),v.end(),temp);

if(it!=v.end())
{
	cout<<it-v.begin()+1<<endl;
}

	
	--n;
    
    }return 0;
}
