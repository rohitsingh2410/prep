#include<bits/stdc++.h>

using namespace std;


void read(int a[][10],int row,int col)
{	cout<<"Enter the array data: "<<endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin>>a[i][j];
		}
	}
}

void pr(int a[][10],int row,int col)
{	cout<<"output: "<<endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}

}


int main()
{
	int row,col;
	//cin>>row>>col;
    int a[10][10];
    cin>>row>>col;
    read(a,row,col);
    pr(a,row,col);

	return 0;
}
