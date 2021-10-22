#include<iostream>
using namespace std;

class Node{
   public:
	int key;
	int data;
	Node* next;
	Node* previous;
	
	Node()
	{
		key=0;
		data=0;
		next=NULL;
		previous=NULL;
	}
	Node(int k,int d)
	{
		key=k;
		data=d;
	}
  };
  class Doublylinkedlist{
   public:
	 Node* head;
	 Doublylinkedlist()
	 {
	    head=NULL;	
	 }	
	Doublylinkedlist(Node* n)
	 {
	 	head=n;
	 }
	 
   //1 check if node value exists using key value
    Node* checkIfNodeExists(int k)
    {
    	Node* temp=NULL;
    	Node* ptr= head;
    	while(ptr!=NULL)
    	{
    		if(ptr->key==k)
    		{
    			temp=ptr;
			}
    		ptr=ptr->next;
		}
		return temp;        
	}
	//2 Append Node
	void appendNode(Node* n)
	{
		if(checkIfNodeExists(n->key) != NULL)
		{
			cout<<"Node Already Exists with key value "<<n->key<<"Append with anothr key value "<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head=n;
				cout<<"Node Appended as Head Node  "<<endl;
			}
			else
			{
			   Node* ptr=head;
			   while(ptr->next !=NULL)
			    {
			   	  ptr = ptr->next;
			    }
			    ptr->next=n;
			    n->previous=ptr;
			    cout<<"Node Appended "<<endl;
			}
		}	
	}
   // 3 prepend Node 
    void prependNode(Node* n)
     {
     		if(checkIfNodeExists(n->key) != NULL)
			 {
					cout<<"Node Already Exists with key value "<<n->key<<"Append with anothr key value "<<endl;
			 }
			else
			{
			    if(head==NULL)
			    {
			    	head=n;
			    	cout<<"Node prepended"<<endl;
				}
				else
				{
					head->previous =n;
					n->next=head;
					head=n;
					cout<<" Node prepend "<<endl;
				}
	        }  
    } 
	//4 Insert a node after a perticular node in the list  
	void insertNodeAfter(int k,Node* n)
	 {
	    Node* ptr= checkIfNodeExists(k);
		if(ptr==NULL)
	    	{
			cout<<"NO Node exists with key values "<<k<<endl;
	    	}
		else 
	     {
		  if(checkIfNodeExists(n->key) != NULL)
		     {
				cout<<"Node Already Exists with key value "<<n->key<<"Append with anothr key value "<<endl;
			 }
		  else
		   {
		     Node* nextNode= ptr->next;
			 if(nextNode==NULL)
			  {
			   ptr->next=n;
			   n->previous=ptr;
			   cout<<"Node inserted at the end "<<endl;
			  }
		  	 else
		  	  {
		  	    n->next=nextNode;
		  	    nextNode->previous =n;
		  	    n->previous=ptr;
				cout<<"Node inserted between "<<endl;
			  }
		   }	 	 
	      }    
	}
	
	//5 Delete a node with key value
	void deleteNode(int k)
	{
	  Node* ptr=checkIfNodeExists(k);
	  if( ptr == NULL)
	   {
				cout<<"Node does not Exists with key value "<<k<<endl;
	   }
	  else
	   {
	      if(head==NULL)
	      {
	      	cout<<"Doubly linked list is already empty cannot delete "<<endl;
		  }
		  else
		  {
		  	if(head->key==k)
		  	{
		  	   head=head->next;	
			   cout<<"Node unlinked with key values "<<endl;
			}
			else
			{
				Node* nextNode=ptr->next;
				Node* prevNode=ptr->previous;
				//deleting at the end
				if(nextNode==NULL)
				{
					prevNode->next=NULL;
					cout<<"Node deleted"<<endl;
				}
				//deleting in between
				else
				{
				   prevNode->next=nextNode;
				   nextNode->previous=prevNode;
				cout<<"Node deleted in between"<<endl;
				}
			}
		  }
	   } 
		
	}
	//6 update Node 
	void updateNodeByKey(int k,int d)
	{
		Node* ptr=checkIfNodeExists(k);
		if(ptr != NULL)
		{
			ptr->data=d;
			cout<<"Node updated"<<endl;
		}
		else
		{
			cout<<"Node does not exists with key value "<<k<<endl;
		}	
	}
	//7 printing 
	void printing()
	{
      if(head==NULL)
      {
      	cout<<"Doubley linked list is empty"<<endl;
	  }
	  else
	  {
	  	cout<<endl<<"Doubly Linked List is "<<endl;
	  	Node* temp=head;
	  	
	  	while(temp!=NULL)
	  	{
	  	   	cout<<"("<<temp->key<<","<<temp->data<<")"<<endl;
	  	   	temp=temp->next;
		}
	  }
	}
};
int main()
{
	Doublylinkedlist obj;
	int option;
	int key1,k1,data1;
	do
	{
	  cout<<"\nWhat operation do you want to perform select option  !!! Select 0 to exit "<<endl;
	  cout<<"1 appendNode(Node* n))"<<endl;
	  cout<<"2 prependNode(Node* n)"<<endl;
	  cout<<"3 insertNodeAfter(int k,Node* n)"<<endl;
	  cout<<"4 deleteNode(int k)"<<endl;
	  cout<<"5 updateNodeByKey(int k,int d)"<<endl;
	  cout<<"6  printing()"<<endl;
	  cout<<"7 clear Screen "<<endl;
	  
	  cin>>option;
	  Node* n= new Node();
	  
	  switch(option)
	  {
	  	case 0:
	  		break;
	  	case 1:
	  		cout<<"Append Node operation "<<endl;
	  		cin>>key1;
	  		cin>>data1;
	  		n->key=key1;
	  		n->data=data1;
	  		obj.appendNode(n);
	  		break;
	  	case 2:
	  		cout<<"Prepand Node "<<endl;
	  		cin>>key1;
	  		cin>>data1;
	  		n->key=key1;
	  		n->data=data1;
 	  		obj.prependNode(n);
            break;
	  	case 3:
	  		cout<<"Insert Node after key "<<endl;
	  		cin>>k1;
	  		cout<<"Enter key value and data"<<endl;
	  	    cin>>key1;
	  	    cin>>data1;
	  	    n->data=data1;
	  	    n->key=key1;
	  	    obj.insertNodeAfter(k1,n);
	  	    break;
	  	case 4:
	  		cout<<"Delete Node with key "<<endl;
	  		cin>>k1;
	  		obj.deleteNode(k1);
	  		break;
	  		
	  	case 5:
	  		cout<<"Enter key and data for update "<<endl;
	  		cin>>key1;
	  		cin>>data1;
	  		obj.updateNodeByKey(key1,data1);
	  	    break;
	  }
	  
	}
	while(option !=0); 
     return 0;
       
}








