#include<iostream>
using namespace std;

class Node{
	public:
		int key;
		int data;
		Node* next;
		
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
class CircularLinkedList
{
	public:
		Node* head;
		
	CircularLinkedList()
	  { 
		head=NULL;
	  } 
	 // 1 Check if Node Exists
     Node* nodeExists(int k)
     {
     	Node* temp=NULL;
     	Node* ptr=head;
     	
     	if(ptr==NULL)
     	 {
     		return temp;
		 }
     	else
     	 do
     	  {
     	    if(ptr->key==k)
			 {
			 	temp=k;
			  } 
			  ptr=ptr->next;
		  }while(ptr!=head);
		    return temp;
	 }
	 //2 Append Node 
	 void appendNode(Node* new_node)
	 {
	 	if(nodeExists(new_node->key)==k)	 
		 {
		 	cout<<"Node Already exists with  key value "<<k<<endl;
		 }
		 else
		 {
		 	if(head==NULL)
		 	 {
		 	   head=new_node;
		 	   new_node->next=head;
		 	   cout<<"Node Appended "<<endl;
			 }
			 else
			 {
			 	Node* ptr =head;
			 	while(ptr->next !=head)
			 	 {
			 		ptr=ptr->next;
				 }
				 ptr->next=new_node;
				 new_node->next=head;
				 cout<<"NODE Appended Successfully"<<endl;
			 }
		 }
	 }
	 //3 prepandNode -Attach a Node at the start
	 void prepandNode(Node* new_node)
	  {
	    if(nodeExists(new_node->key)!=NULL)
	      {
		  cout<<"Node Already Exists with key value "<<endl;
	      }
	    else
		 {
		 	if(head==NULL)
		 	 {
		 		head=new_node;
		 		new_node->next=head;
		 		cout<<"Node Appended at the first position"<<endl;
			 }
		    else
		     {
		     	Node* ptr= head;
		     	while(ptr->next != head)
		     	  {
		     	 	ptr=ptr->next;
				  }
		     	ptr->next = new_node;
		     	new_node->next=head;
		     	head=new_node;
		     	cout<<"Node prepanded"<<endl;
			 }
	      }
	 //4 insert a node after given key
	 void insertnode(int k,Node* new_node)
	  {
	  	  Node* ptr= nodeExists(k);
	  	  if(ptr==NULL)
	  	   {
	  	   	cout<<"Node does not exists "<<endl;
		   }
		   else
		    {
		     if(nodeExists(new_node->key) != NULL)
		     {
		     	cout<<"Node Already exists"<<endl;
			 }
			 else
			 {
			   if(ptr->next == head)
			    {
			    	ptr->next=new_node;
			    	new_node->next=head;
			    	cout<<"Node inserted "<<endl;
				}
			    else
			     {
			     	 new_node->next=ptr->next;
					 ptr->next=new_node;
			     	 cout<<"Node inserted "<<endl;
				 }      
		    }
		   }
	  }
	 //5 Delete Node by key value k
	 void deleteNode(int k)
	  {
	  	if(nodeExists(k)==NULL)
	  	  {
	  	 	cout<<"Node does not exists with key value "<<endl;
		  }
	  	else
	  	{
	  		Node* ptr=head;
	  		while(ptr->key != k)
	  		 {
	  		    ptr=ptr->next;	
		     }
	  		ptr->next=ptr->next->next;
	  		
		  }
	  }
	 
	 	
};








int main(){
	
	
}












