#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="hello";
int l1=str.length();
int freq[26]={0}; // 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

//cout<<str[0]-'a'; //7th index

//str[0]-'a' will tell us the index of the character in frequency array.

for (int i = 0; i < l1; ++i)
{
	freq[str[i]-'a']=freq[str[i]-'a']+1;  //
}
// freq array for word "hello" will look like this :
// 0 0 0 0 1 0 0 1 0 0 0 2 0 0 1 0 0 0 0 0 0 0 0 0 0 0 
// a b c d e f g h i j k l m n o p q r s t u v w x y z
for (int i = 0; i <l1; ++i)
{
	if(freq[str[i]-'a']!=0)
	{
		cout<<str[i]<<freq[str[i]-'a'];

		freq[str[i]-'a']=0; // resetting to avoid repitition of character count
	}
}

	return 0;
}
