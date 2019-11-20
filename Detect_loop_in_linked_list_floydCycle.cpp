#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;
	
};

void detect_loop(node* start)
{ //cout<<"test"<<endl;
	node* slow=start; node* fast=start;
	int flag=0;
	while(slow&&fast&&fast->next)
	{
		slow=slow->next; fast=fast->next->next;

		if(slow==fast)
		{
			cout<<"loop detected."; flag=1;break;
		}
	} if(flag==0)
	{
		cout<<"no loop detected.";
	}
	
}


int main()
{
	node* head=NULL;
	node* sec=NULL;
	node* third=NULL;
	node* fourth=NULL;

	head=new node();
	sec=new node();
	third=new node();
	fourth=new node();

	head->data=1; head->next=sec;

	sec->data=2; sec->next=third; // loop start

	third->data=3; third->next=fourth;

	fourth->data=4; fourth->next=sec; // loop
	//cout<<"test"<<endl;
	detect_loop(head);


	return 0;
}
