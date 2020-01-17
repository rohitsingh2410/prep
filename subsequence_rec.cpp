#include<bits/stdc++.h>
using namespace std;

void sub(char* ip, char* op, int i, int j)
{
	//base case.
	if(ip[i]=='\0')
	{
		op[j]='\0';
		cout<<"'"<<op<<"'"<<endl;
		return;
	}

	// rec. case
	// Include the current char
	op[j]=ip[i];
	sub(ip,op,i+1,j+1);

	// not include current char
	sub(ip,op,i+1,j);
}



int main()
{
	char input[50];
	cin>>input;
	char op[50];

	sub(input,op,0,0);
	return 0;
}
