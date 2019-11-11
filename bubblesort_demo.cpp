// Bubble sort demo
// O(N)
#include<iostream>
using namespace std;
int main() {

    int data[5]={5,4,3,1,2};

    for (int i = 0; i < 5-1; ++i)
    {
    	for (int j = i+1; j<5; ++j)
    	{
    		if(data[i]>data[j]) //swap
    		{
    			int temp;
    			temp=data[i];
    			data[i]=data[j];
    			data[j]=temp;
    		}
    	}
    }

    for (int i = 0; i < 5; ++i)
    {
    	cout<<data[i]<<" ";
    }cout<<endl;

	return 0;
}
