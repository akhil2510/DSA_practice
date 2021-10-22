#include<iostream>

using namespace std;

class Node {
	public:
		int key;
		int data;
		Node* next;
    
    Node(){
    	key=0;
    	data=0;
    	next=NULL;
	    }
	Node(int k,int d)
	 {
	 	key=k;
	 	data=d;
	 	next=NULL;
	 }
};
class Stack
{
  public:
  	Node* top;
  	Stack()
	  {
  		top=NULL;
	  }
	bool isEmpty()
	{
	  if(top==NULL)
	   {
	   	return true;
	   }
	  else
	   {
	   	 return false;
	   }
	}
	bool checkIfNodeExist(Node* n)
	{
		Node* temp=top;
		bool exist =false;
		while(temp != NULL)
		 {
		 	if(temp->key=n->key)
		 	 {
		 	    exist=true;
		 	    break;
			 }
		 	temp=temp->next;
		 }
		 return exist;
	}
	void push(Node *n)
	{
		if(top==NULL)
		{
			top==n;
		}
		else if(checkIfNodeExists(n))
		{
			cout<<"Node Already Exists "<<endl;
		}
		else
		{
			Node* temp=top;
			top=n;
	          n->next=temp;
		}
	  }
	Node* pop()
	{
		Node *temp=NULL;
		if(isEmpty())
		 {
		 	cout<<"Stack UnderFlow"<<endl;
		 	return temp;
		 }
		else
		{
			temp=top;
			top=top->next;
			return temp;
		}
	}
	Node* peek()
	{
	  if(isEmpty())
	  {
	  	cout<<"Underflow "<<endl;
	  	return NULL;
	  }
	  else
	  {
	  	return top;
	  }
	}
	
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
}
int main(){
	Stack s1;
	int option,key,data;
	
	do{
		cout<<"What operation do you want to perform ? "<<"Select option .Enter 0 to exit "<<endl;
		cout<<"1  push()"<<endl;
		cout<<"2  pop()"<<endl;
		cout<<"3  isEmpty()"<<endl;
		cout<<"4  peek()"<<endl;
		cout<<"5  count()"<<endl;
		cout<<"6  display()"<<endl;
		cout<<"7  clear screen "<<endl;
		cin>>option;
		
		Node* new_node = new Node();
		case 0:
			break;
		case 1:
			cout<<"Enter key and Push value of Node "
		
	}
	
	
}





















