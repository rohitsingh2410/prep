#include<bits/stdc++.h>
using namespace std;
/*
1. Insert elements at top.
2. Traverse along the nodes.
3. insert at the end of the list.
4. insert in between nodes.
5. Delete a Node.
*/

class node{
	public:
	int data;
	node* next;

};


class linklist{
public:
	node* head;
	linklist(){
	 head=NULL;
	}
void insert(int data)
{
	node* temp= new node();
	temp->data=data;
	temp->next=head;
	head=temp;
}

void display()
{
	node* ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}cout<<endl;
}

void append(int data)
{
	node* temp=new node;
	node* last = head;
	temp->data=data;
	temp->next=NULL;
	


	if(head==NULL)
	{
		head=temp;
		return;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}

	last->next=temp;
	return;
}

void insertAfter(int position, int data)
{ node* ptr=head;
	for (int i = 0; i < position-1; ++i)
	{
		ptr=ptr->next;
	}
	node* temp=new node;
	temp->data=data;
	temp->next=ptr->next;
	ptr->next=temp;
}
// 1 2 3 4 5 6
void del(int key)
{ node* temp= head;
  node* prev;
	// if head holds the key to be deleted.
	if(temp!=NULL && temp->data==key)
	{
		head=temp->next;
		free(temp);
		return;
	}
//else, search for the key to be deleted and keep track of 
// the previosu node.
	// 1 2 3 4 5 6

	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}
	if (temp==NULL)
	{
		cout<<"Key not found in list."; return;
	}
	prev->next=temp->next;
	free(temp);
}
// null- 1->2->3->null
void reverse()
{
	node* current=head;
	node* prev=NULL;
	node* temp=NULL;

	while(current!=NULL)
	{
		temp=current->next;
		current->next=prev;
		prev=current;
		current=temp;
	}
	head=prev;

}


};

int main()
{
	linklist l1,l2;
	//1. Insert at last
	for (int i = 1; i <=5; ++i)
	{
		l1.append(i);
	}
	// use l1.insert(i) to insert at head.
	cout<<"Linked list is: ";
	l1.display();  // 1- 2 - 3 - 4 - 5
	
	// insert after
	int position,data;
	cout<<"Enter the position after and the data respectively: "<<endl;
	cin>>position>>data;
	l1.insertAfter(position, data);
	l1.display();

	cout<<"Enter the Data of the node to Delete: "<<endl;
	cin>>position;
	l1.del(position);
	l1.display();
	cout<<"Reversed linked list is: "<<endl;
	l1.reverse();
	l1.display();

	return 0;
}
