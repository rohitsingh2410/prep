#include<bits/stdc++.h>
using namespace std;
//keypad
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void keys(char* in, char* op, int i, int j)
{
	// base case
	if(in[i]=='\0')
	{
		op[j]='\0';
		cout<<op<<" ";
		return;
	}

	// rec. case
	int digitEntered= in[i]-'0';

		//exception for 1 & 0
	if(digitEntered==1 || digitEntered==0)
	{
		keys(in,op,i+1,j);
	}
	for(int k=0;keypad[digitEntered][k]!='\0';++k)
	{
		op[j]=keypad[digitEntered][k];
		keys(in,op,i+1,j+1);

	}
}

int main()
{
	char input[50];
	cin>>input;
	char op[50];

	keys(input,op,0,0);
	return 0;
}
