#include<bits/stdc++.h>
using namespace std;

int main()
{

string data="helloo there how areee you"; // a_size=5, char count =23
//getline(cin,data); 
int count=0; // initialize a count to count total number of spaces in string.
int len=data.length();
for (int i = 0; i < (int)data.length(); ++i)
{
	if(data[i]==' ')
	{
		++count;
	}
}
//declare a string array +1 greater than the size 
// num of space in string.
string* str = new string[count+1];

int i, start=0;
for (int index=0; index<count+1; ++index) // index array to increment index of string array and feed data.
{	string temp="";
	for ( i = start; i <len; ++i)
	{	
		if(data[i]!=' ') //increment temp stored word till you find a space.
		{
			temp=temp+data[i];
		}else{
			start=i+1; // increment i counter to next to the space
			break;
		}
	}str[index]=temp;
}

// now i have data in string array format.
//print data 

for (int i = 0; i < count+1; ++i)
{
	cout<<str[i]<<" ";
}

	return 0;
}
