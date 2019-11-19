#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v={2,1,4,3,6,5,8,7}; // 2nd largest num? == 7.
	int k=2; int l=2; int vsize=v.size();
	set<int> container;

	for (int i = 0; i < vsize; ++i)
	{
		container.insert(v[i]);
	}

	//set<int>:: iterator it;
/*
	for (it=container.begin();it!=container.end();++it)
	{
		//auto data =it;
		cout<<*it<<" ";
	}*/
cout<<k<<" smallest ";
	auto it=container.begin();

	for (int i = 0; i < k-1; ++i)
	{
		++it;
	}
	cout<<*it<<endl;

cout<<l<<" largest ";
	auto it1=container.end();

	int track=0;
	while(track<l)
	{
		--it1;
		++track;

	}
	cout<<*it1;




	return 0;
}
