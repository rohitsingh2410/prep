#include<bits/stdc++.h>
using namespace std;

int main()
{	// rot sng
	string str="rohit singh"; 
	getline(cin,str);
	string temp="";
	int len= str.length();
	for (int i = 0; i < len; ++i) //r
	{ int found=0;
		for (int j = 0; j <len; ++j) // o h i t s i n g h
		{
			if(str[i]==str[j] && (i!=j))
			{
				found=1;
			}
		} if(found==0)
		{
			//cout<<str[i];
			temp.insert(0,1,str[i]);
		}
	}
	cout<<temp;


	return 0;
}
