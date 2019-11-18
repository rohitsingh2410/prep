#include<bits/stdc++.h>
using namespace std;

int main()
{	cout<<"Enter the parenthesis brackets here: ";
	//string str="}{";
	string str;
	getline(cin,str);
	//string str="{{}}[]";
	int count=str.length();
	//  {{}}[]
	stack<char> data; int flag=0;
	for (int i = 0; i < count; ++i)
	{
		if(str[i]=='{'||str[i]=='['||str[i]=='(')
		{
			data.push(str[i]);
		}

		else if((str[i]=='}'||str[i]==']'||str[i]==')') && (data.empty() ))
		{
			flag=1;
			break;
		}

		else if(str[i]=='}' && data.top()=='{')
		{
			data.pop();
		}
		else if(str[i]==']' && data.top()=='[')
		{
			data.pop();
		}
		else if(str[i]==')' && data.top()=='(')
		{
			data.pop();
		}
	}

if(flag==1)
{
	cout<<"Not Balanced.";
}
if(data.empty()&&flag==0)
{
	cout<<"Balanced";
}


	return 0;
}
