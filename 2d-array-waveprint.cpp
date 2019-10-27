#include<bits/stdc++.h>
#define r 4
#define c 4
using namespace std;

void printwave(int a[r][c],int row,int col)
{
	int flag=0; //if flag=0 go down, if flag =1 go up.
	int icol=0;

	while(icol<col)
	{
		if(flag==0)
		{
			for (int i = 0; i < row; ++i)
			{
				cout<<a[i][icol]<<" ";
			}++icol;
			flag=1;
		}
		else if(flag==1)
		{
			for (int i = row-1; i >=0; --i)
			{
				cout<<a[i][icol]<<" ";
			} ++icol;
			flag=0;
		}
	}
}



int main()
{
	int arr[r][c]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	printwave(arr,4,4);

	return 0;
}
