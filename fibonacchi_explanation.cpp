#include<bits/stdc++.h>
using namespace std;
/*


typical fib serie sis like 
1 1 2 3 5 8 12 21 34 55 89 ........

6th num=8.
// last 2 sums,
fib(6)= fib(5)+fib(4)


i.e, fib(n)=fib(n-1)+fib(n-2);

*/
int fib(int data)
{
	if(data==1 || data==2)
		{ return 1;
		}
	else
	{
		return fib(data-2)+fib(data-1);
	}
}



int main()
{

int i; cin>>i;

cout<<fib(i);	
	return 0;
}
