#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* link;
};
void InsertFirst (Node** head, int newData) {
	Node* newnode = new Node();
	newnode->data = newData;
	newnode->link = *head;
	*head = newnode;
	/*
	Node* n = *head;
	while (n != NULL) {
		cout << n->data << " ";
		n = n->link; 
	}
	cout<<endl;
	*/
}
void AppendLast (Node** head, int newData) {
	Node* newnode = new Node();
	newnode->data = newData;
	newnode->link = NULL;
	Node* n = *head;
	if ( *head == NULL) {
		*head = newnode;
	} else {
		while ( n->link != NULL) {
			n = n->link;
		}
		n->link = newnode;
	}
	/*
	n = *head;
	while (n != NULL) {
		cout << n->data << " ";
		n = n->link; 
	}
	cout<<endl;
	*/
}
int main()
{
	int x,y;
	Node* m = NULL;
	Node* head=NULL;
	
	for (int i = 1; i <= 5 ; i++) {
		cout<<"Enter the value you want to insert: ";
		cin >> x;
		
		cout << "Enter 1 for inserting first, 2 for in last: ";
		cin >> y;
		
		if (y == 1) {
			InsertFirst(&head, x);
		} else if (y==2) {
			AppendLast(&head, x);
		}
	}
	Node* n = head;
	
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->link;
	}
	for(n=head;n!=NULL;n=n->link)
	{
		Node *newnode=new Node();
		newnode->data=n->data;
		newnode->link=m;
		m=newnode;
	}
	cout<<endl<<"REVERSED LIST"<<endl;
	n=m;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->link;
	}
	return 0;
}
