#include<bits/stdc++.h>
#define r 4
#define c 4
using namespace std;

void search_arr(int a[r][c],int row,int col,int to_search)
{	/*row=row-1;
	cout<<"row="<<row<<endl<<"column="<<col<<endl;
	cout<<a[row][col]; */


	int current=a[row][col]; //4
	cout<<current<<" "; int found=0;
	while(current!=to_search)
	{
		if (current<to_search &&(row+1 <r)) //go_down
		{	row=row+1;
			current=a[row][col];
			cout<<current<<" ";
		}else if(current>to_search&& (col-1 >=0)) // go_right
		{	col=col-1;
			current=a[row][col];
			cout<<current<<" ";
		}
		if(current==to_search)
		{
			found=1;
		}
		
	}cout<<endl; 
	if(found==1){
	cout<<"found element in A["<<row<<","<<col<<"]"; }
	else //if(row==r&&col==0 &&to_search!=current)
		{
			cout<<"element not found."<<endl;
		}
	
}



int main()
{
	int arr[r][c]={ //given array is sorted in eavh direction of row and col.
		{1,2,3,4},
		{5,8,10,11},
		{12,14,15,18},
		{16,17,20,22}
	};

	int to_search; cin>>to_search;
	search_arr(arr,0,3,to_search);

	return 0;
}
