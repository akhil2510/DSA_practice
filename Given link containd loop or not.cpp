#incude<iostream>
using namespace std;

int main()
{
	
}

struct Node{
	
	int data;
	Node *link;
	
};

int findLoop(Node *head)
{
  Node *slow ,*first;
  slow = head;
  fast=head;
  
while(fast !=NULL && fast->link!=0)
  {
  	fast = fast->link->link;
  	slow = slow->link;
  	if(slow==fast)
  	 return 1;
  }
   retrun 0;
	
	
}


