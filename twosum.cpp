#include<bits/stdc++.h>

using namespace std;

int main()
{
int arr[8]={6,1,4,5,7,8,12,6};	
int size= sizeof(arr)/sizeof(int);
int key= 6;
multimap<int, int> mp;

for (int i = 0; i < size; ++i)
{
	mp.insert(make_pair(arr[i],i));
}
multimap<int, int>:: iterator itr;
/*
for(itr=mp.begin();itr!=mp.end();++itr)
{
	cout<<itr->first<<" "<<itr->second<<endl;
}

*/
for (int i = 0; i < size; ++i)
{
	int comp=key-arr[i];
	itr=mp.find(comp);
	if(itr!=mp.end() && itr->second !=i)
	{
		cout<<arr[i]<<" "<<comp<<endl;
	}
}


	return 0;
}
