#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;
	
};

class link_list
{
public:
	node* head;
	link_list()
	{
		head=NULL;
	}

	void print()
	{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}

	void push(int data)
	{
		node* temp= new node();
		temp->data=data;
		temp->next=head;
		head=temp;

	}

	void reverse()
	{
		node* current=head;
		node* previous=NULL;
		node* next= NULL;

		while(current!=NULL)
		{
			next=current->next;
			current->next=previous;

			previous=current;
			current=next;
		}head=previous;
	}
	
};


int main()
{
	link_list ll;

	ll.push(1);
	ll.push(2);
	ll.push(3);
	ll.push(4);
	cout<<"data is "<<endl;  // 4->3->2->1->NULL 
	ll.print();
	cout<<"Reversing the linked list"<<endl;
	ll.reverse();
	ll.print();


	return 0;
}
