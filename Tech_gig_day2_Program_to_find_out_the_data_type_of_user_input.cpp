#include<iostream>

using namespace std;

int main()
{
	
	
string data;
getline(cin,data);
int len=data.length();
int flag=0;

// for integer anf float if flag==1 it is int, if flag==2 it is float.
for (int i = 0; i < len; ++i)
{
	if(data.at(i)>='0' && data.at(i)<='9')
	{
		flag=1;
	} //cout<<data.at(i)<<" ";

}
//cout<<flag;
if(flag==1)
{
for (int i = 0; i < len; ++i)
{
	if(data.at(i)=='.')
	{
		flag=2;
	} //cout<<data.at(i)<<" ";
}
}

// if it is a single character in range a-z || A-Z it is char else if len>1 && in range azAZ it is a string.

if(len==1 && ((data.at(0)>='a' && data.at(0)<='z')|| (data.at(0)>='A' && data.at(0)<='Z')) )
{
	cout<<"char";
}
else if(len>1)
{	
	for (int i = 0; i < len; ++i)
	{
		if(((data.at(0)>='a' && data.at(0)<='z')|| (data.at(0)>='A' && data.at(0)<='Z')))
		{
			flag=3;
		}
	}
	//cout<<"string";
}
else{
	cout<<"This is something else.";
}



if(flag==1)
{
	cout<<"This input is of type Integer.";
}else if(flag==2)
{
	cout<<"This input is of type Float.";
} else if(flag==3)
{
	cout<<"This input is of type string.";
}

	return 0;
}
