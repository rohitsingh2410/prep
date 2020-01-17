#include<iostream>
using namespace std;

void permute(char* a,int i)
{
	// base case.
	if(a[i]=='\0')
	{
		cout<<a<<endl;
		return;
	}
	// Recursive case
	for(int j=i; a[j]!='\0';j++)
	{
		swap(a[i],a[j]);
		permute(a,i+1);
		// Backtracking
		swap(a[i],a[j]);

	}
}
int main()
{ 

	char arr[50];
	cin>>arr;
	permute(arr,0);
	return 0;
}
