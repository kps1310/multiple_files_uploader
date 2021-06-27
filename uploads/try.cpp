#include<iostream>
using namespace std;
class Node
{
	public:
	int d;
	Node *b;
};

int main()
{
	Node *head=new Node();
	Node *n=head;
	for (int i=10;i>=1;i--)
	{
		Node *h=new Node();
		h->d=i;
		h->b=head;
		head=h;
	}
	for(n=head;n->b!=NULL;n=n->b)
	{
	cout << n->d;
	}
	return 0;
}
