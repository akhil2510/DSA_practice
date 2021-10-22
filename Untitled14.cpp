#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};

Node* head;

void insert(int x)
{
	Node* temp=new Node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{ 
   Node* t=head;
   cout<<"List is "<<endl;
   while(t != NULL)
   {
   	cout<<t->data;
   	t=t->next;
   }
	cout<<endl;
}

int main()
{
	head=NULL;
	cout<<"How many number"<<endl;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
		print();
	}
	return 0;
}




