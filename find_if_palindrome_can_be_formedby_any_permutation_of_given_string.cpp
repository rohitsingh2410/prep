#include<iostream>

using namespace std;

int main()
{
	string input; getline(cin,input); // gattaacag 

	int freq[26]={0}; 
	int len=input.length();

	for (int i = 0; i < len; ++i)
	{
		freq[input[i]-'a']=freq[input[i]-'a']+1;
	}

	// odd value should not occur more than one.
	int odd_counter=0;

	for (int i = 0; i < 26; ++i)
	{
		if(freq[i]%2!=0)
		{
			++odd_counter; 
		}
	} 
/*
	for (int i = 0; i < 26; ++i)
	{
		cout<<freq[i]<<" ";
	}cout<<endl;

*/

	//cout<<odd_counter<<endl;
	if(odd_counter>1)
	{
		cout<<"palindrome cannot be formed by any permutation of string.";
	}else{
		cout<<"palindrome can be formed by any permutation of string.";
	}
	
}
