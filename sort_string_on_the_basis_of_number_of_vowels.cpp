#include<bits/stdc++.h>
using namespace std;


//vowel count function

int count_vow(string data)
{
	int no=0;
	for (int i = 0; i < (int) data.length(); ++i)
	{
		if(data[i]=='a'||data[i]=='e'||data[i]=='i'||data[i]=='o'||data[i]=='u')
		{
			++no;
		}
	}
	return no;
}

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
/* for (int i = 0; i < count+1; ++i)
{
	cout<<str[i]<<" ";
} */

// sort on the basis of acending order of no of vowels.
// ip:str= helloo there how areee you
// op: how there you helloo areee     {there & you can be interchanged}

// Bubble sort the string array on the basis of vowel count.
for (int i = 0; i < (count+1)-1; ++i)
{
	for (int j = i+1; j < count+1; ++j)
	{
		if(count_vow(str[i]) > count_vow(str[j]) )// swap str[j] & str[i]
		{
			//swap(str[j],str[i]);
			string temp1="";
			temp1=str[i];
			str[i]=str[j];
			str[j]=temp1;
		}
	}
}


//printing the answer
for (int i = 0; i < count+1; ++i)
{
	cout<<str[i]<<" ";
}

	return 0;
}
