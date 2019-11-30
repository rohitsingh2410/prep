#include<bits/stdc++.h>

using namespace std;

int reversenum(string data) // learned using stringstream. :)
{ string temp; int len=data.length(); int strtoint=0;
	if(len>1){
	for (int i = len-1; i >=0; --i)
	{
		temp=temp+data.at(i);
	}
     
	stringstream conv(temp);
	
	conv>>strtoint;
     }

     else{
    stringstream conv(data);
	conv>>strtoint;

     }

	return strtoint;
}

int reverseanswer(int data) // 1234
{
	int temp=0,rev=0;
	while(data>0)
	{
		temp=data%10; // 4
			rev=rev*10+temp;

		data=data/10;

	}
	return rev;
}




int main()
{
	int n; cin>>n;
	cin.ignore();
	while(n>0)
	{
		string n1,n2;
		
		cin>>n1>>n2;
		int data1 = reversenum(n1);int data2=reversenum(n2);

		int sum=data1+data2;
		//cout<<data1<<" "<<data2<<endl;
		cout<<reverseanswer(sum)<<endl;

		--n;
	}

	return 0;
}
