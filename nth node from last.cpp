#include<iostream>
#include<string>

using namespace std;
class Node{
   public:
	Node* data;
	Node* next;
	Node()
	{
		data=NULL;
		next=NULL;
	}
};
class linked_list
{
  public:
 	Node* head;
 	
  linked_list()
  {
  	head=NULL;
  }
  linked_list(Node* n)
  {
  	head=n;
  }
  void add_list(Node * n)
  {
  	Node* temp=NULL;
  	temp->data=n;
  	temp=temp->next;
  }
  

 
};

int main()
{

	
 
}


