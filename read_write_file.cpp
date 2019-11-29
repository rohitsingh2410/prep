#include<fstream>
#include<iostream>

using namespace std;
int main()
{
	//ofstream fout;

	//fout.open("write.txt");
	//fout<<"Hello";

	//fout.close();

	ifstream fin; char ch;
	fin.open("read.txt");
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	fin.close();


	return 0;
}
