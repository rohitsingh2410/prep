// insertion sort O(N)
#include<iostream>

using namespace std;

int main()
{	int a[]={15,4,3,1,6};
	int size=sizeof(a)/sizeof(int); // 5

	for (int i = 1; i < size; ++i)
	{
		int key=a[i];
		int j=i-1;

		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=key;
	}
	
// print array..

	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}


	return 0;
}
