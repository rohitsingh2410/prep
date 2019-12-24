#include<bits/stdc++.h>
using namespace std;
/*
1. Insert elements at top.
2. Traverse along the nodes.
3. insert at the end of the list.
4. insert in between nodes.
5. Delete a Node.
*/

class node
{
public:
	int data;
	node* prev;
	node* next;
};




class dll
{
public:
	node* head;
	dll()
	{
	 head=NULL;
	}
	
	void append(int data)
	{
		node* temp=new node;
		node* last=head;

		temp->data=data;
		temp->next=NULL;

		if(head==NULL) // if head is null make the head transfer the temp data to head only.
		{
			temp->prev=NULL;
			head=temp;
			return;
		}
		while(last->next!=NULL)
		{
			last=last->next;
		}
		last->next=temp;
		temp->prev=last; // the only difference in DLL and SLL append. 
	}

	void display()
	{
		node* temp=head;
		node* last;
		cout<<endl<<"Displaying in forward: ";
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			last=temp;
			temp=temp->next;
		}
		cout<<endl<<"Displaying in backward: ";
		while(last!=NULL)
		{	cout<<last->data<<" ";
			last=last->prev;
		}cout<<endl;
		
	}

	void addafter(int pos,int data)
	{ // 1 2 3 4 5
		node* previousnode=head;
		for(int i=1;i<pos;++i)
		{
			previousnode=previousnode->next;
		}

		if(previousnode==NULL) {cout<<"Previous cannot be null.";}

		node* temp = new node;

		temp->data=data;
		temp->next=previousnode->next;

		previousnode->next=temp;
		temp->prev=previousnode;

		if(temp->next!=NULL)
		{
			temp->next->prev=temp;
		}

	}

void del(int key)
{
	node* del=head;
	while(del->data!=key) // gettign previous node of the key node to be deleted.
	{
		del=del->next;
	}
	if(del==NULL||head==NULL)
		return;

	if(del->next!=NULL)
	{
		del->next->prev=del->prev;
	}
	if(del->prev!=NULL)
	{
		del->prev->next=del->next;
	}
	free(del);
	return;

}




};








int main()
{
	
dll l1;

for (int i = 0; i < 5; ++i)
{
	l1.append(i);
}
//cout<<"DLL: "<<endl;
l1.display();
// Insert after operation.
cout<<"Insert After operation: "<<endl;
cout<<"Enter the node positon after which you would like to add a new node: "; 
int pos,data;
cin>>pos;
cout<<"Enter the data: "; cin>>data;
l1.addafter(pos,data); cout<<endl;
l1.display();

// Delete Operation
cout<<endl<<"Delete Operation"<<endl;
cout<<"Enter the Key value to be deleted: ";int key;
cin>>key;
l1.del(key);
l1.display();



	return 0;
}
