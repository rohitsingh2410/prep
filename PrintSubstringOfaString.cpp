#include<bits/stdc++.h>

using namespace std;

int main()
{
string word="abcd";

for (int i = 0; word[i]!='\0'; ++i)
{
	for (int j = i; word[j]!='\0'; ++j)
	{
		//cout<<"{"<<i<<","<<j<<"}, ";
		for (int k = i; k <=j; ++k)
		{
			cout<<word[k];
		} cout<<endl;
	}
	
}
	return 0;
}
