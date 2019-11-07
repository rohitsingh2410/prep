// Wave sort the array.
/*
Big number
\/\/\/
Small number
*/
#include<bits/stdc++.h>

using namespace std;

void swapit(int* a, int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a[]={1,3,4,2,7,8};
	int size=sizeof(a)/sizeof(int);

	for (int i = 0; i < size-1; ++i)
	{
		if(i%2==0) // i is even
		{
			if(a[i]<a[i+1])
			{
				swapit(&a[i],&a[i+1]);
			}
		}
		else if(i%2!=0) // i is odd
		{
			if(a[i]>a[i+1])
			{
				swapit(&a[i],&a[i+1]);
			}
		}
	}

//print
	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}
