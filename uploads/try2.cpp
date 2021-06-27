 #include <iostream>
using namespace std;
class Node {
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
void inbetween( Node** head, int newdata) {
	Node* newnode = new Node(),*p;
	newnode->data = newdata;
	newnode->link=NULL;
	Node* n = *head;
	
	if(n->data > newnode->data)
	{
	
	newnode->link=n;
	*head=newnode;
	n = *head;
    }
    else 
	{
	

	while( n->link!=NULL) 
	{
		if(n->link->data< newnode->data)
		n = n->link;
		else break;
		
		
	}
	if(n->link!=NULL)
	{
	
	p=n->link;
	n->link=newnode;
	newnode->link=p;}
	else

         {
         	n->link=newnode;
		 }
	
}
}
int main() {
	int x, y, z, temp;
	Node* head = NULL;
	
Node* m = NULL;
	
	
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
	while (n != NULL) {
		cout << n->data << " ";
		n = n->link; 
	}
	cout<<endl;
	
	//Applying Sort
		n = head;
	
		
	do {
		m=n->link;
	
		do {
			
			if (n->data > m->data) {
				temp = n->data;
				n->data = m->data;
				m->data = temp;
			
			}
			m = m->link;
		}while (m!=NULL);
		n=n->link;
	} while (n->link!=NULL);
	cout<<endl<<"SORTED LIST"<<endl;
	cout<<"NEW LIST"<<endl;
	n = head;
	while (n != NULL) {
		cout << n->data << " ";
		n = n->link; 
	}
	cout<<endl;
	
	//Inserting Element
	cout << "Enter the value u want to insert: ";
	cin >> z;
	inbetween(&head, z);
	
	
	n = head;
	while (n != NULL) {
		cout << n->data << " ";
		n = n->link; 
	}
	cout<<endl;
	
}

