#include<iostream>

using namespace std;

class Node{
	public :
		int key;
		int data;
		Node *next;
		
		Node()
		{
			key=0;
			data=0;
			next=NULL;
		}
	    Node(int k,int d)
	    {
	    	
	    	key=k;
	    	data=d;
		}	    
};
class SinglyLinkdList()
{
	public:
		Node *head;
		
	SinglyLinkdList(Node *n)
	{
	  head=n;	
	}
	//check if node exists using key values
    Node *nodeExists(int k)
    {
    	Node *temp=NULL;
    	Node *ptr=head;
    	
    	while(ptr != NULL)
    	{
    		if(ptr ->key==k)
    		{
    			temp=ptr;
			}
			ptr = ptr ->next;
		}	
		return temp;
	}
	// 2 Append a node to the list
	void appendNode(Node *n)
	{
		if(nodeExists(n->key)!= NULL)
		{
			cout<<"Node Already exists using key value "<< n->key <<"Append another node using different key value"<<endl;
		}
		else
		  {
		  	Node *ptr = head;
		  	while(ptr->next != NULL)
		  	{
		  		ptr = ptr->Next;	
			}
		  	ptr -> Next =n;
		  	cout <<"Node Appended "<<endl;
		  }
	}
	// 3 Prepand Node - Attach a node at the start
	void prepandNode(Node *n)
	{
	  if(nodeExists(n ->key)!=NULL)
	  {
	  	cout<<"Node already exists with key value :"<<n->key<<"append another node with different key value "<<endl;
	  }
	  else
	  {
	  	n->next = head; 
	  }
		
	}
	//4 Inserty a node after a perticular node in the list
	void insertNodeAfter(int k,Node *n)
	{
		Node *ptr=nodeExists(k);
		if(ptr==NULL)
		{
			cout<<"NO node exists with this key value "<<k<<endl;
		}
		else
		{
			if(nodeExists(n->key)!= NULL)
	     	{
			cout<<"Node Already exists using key value "<< n->key <<"Append another node using different key value"<<endl;
		    }
		   else
		   {
		   	 n->next = ptr ->next;
		   	 ptr->next = n;
		   	 cout<<"Node inserted"<<endl;
		   }
		}	
	}
	//5  Delete node by unique key 
	void deleteNodeByKey(int k)
	{
		if(head==NULL)
		{
			cout<<"singly linked list already exists "<<endl;
		}
		else if(had != NULL)
		{
			if(head ->key ==k)
			{
				head=head ->next;
				cout<<"Node unlinked with keys value "<<k<<endl;
			}
			else
			{
				
			}
		}
	}
	
	
		
		
		
};
