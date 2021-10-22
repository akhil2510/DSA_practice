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
			data = d;
		}
	 
	 
};
class singlyLinkedList{
	public :
		Node *head;
		
	singlyLinkedList()
		{
		   head=NULL;    
		}
	singlyLinkedList(Node *n)
		{
			head=n;
		} 
		//1 check if node exists using key value 
	Node* nodeExists(int k)
		{
			Node* temp=NULL;
			Node*  ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key == k)
				{
					temp=key;
				}
				ptr =  ptr -> next;
			}
			return temp;	
		}
		// 2 Append a node to the list 
		void appendNode(Node* n)
		{
			if(nodeExists(n->key) != NULL)
			{
				cout<<"Node Alrady Exists "<<endl;
			}
			else
			{
				if(head==NULL)
				{
				   head = n;
				   cout<<"Node Appended "<<endl;	
				}
				else
				{
					Node* ptr=head;
					while(ptr->next!=NULL)
					{
						ptr = ptr->next;
					}
					ptr->next = n;
					cout<<"Node Appended"<<endl;
				}
			}	
		}
		//3 prepend a node  - attach a node to the list
	    void prepandNode(Node *n)
	    {
	       if(nodeExists(n->key) != NULL)
			{
				cout<<"Node Alrady Exists "<<endl;
			}
		   else
		   {
		   	 n->next = head;
		   	 head=n;
		   	 cout<<"Node preponded"<<endl;
			}	
		}
		//4 insert a node after a perrticular
         void insertNode(int k, Node* n)
		 {
		   Node* ptr =nodeExists(k)	; 
		   if(ptr==NULL)
		   {
		   	   cout<<"No node exists with key value"<<k<<endl;
		   }
		   else
		   {
			 if(nodeExists(n->key) != NULL)
			 { 
				cout<<"Node Alrady Exists "<<endl;
			 }
		     else 
		     {
		        n->next =ptr->next;
				ptr->next = n;
				cout<<"Node inserted "<<endl;	
			 }
		   }
	    }
	    //5 Delete a node 
	     void deleteNode(int k)
	     {
	       Node* ptr;
	       if(head==NULL)
	       {
	       	 cout<<"Singly link list is empty"<<endl;
		   }
			else if(head !=NULL)
				{
					if(head->key == k)
					{
						head= head->next;
						cout<<"Node Unlinked"<<endl;
					}
					else
					{
						Node* temp=NULL;
						Node* prptr =head;
					    Node* crptr=head->next;
					    while(crptr != NULL)
					    {
					    	if(crptr->key ==k)
					    	{
					    		temp =crptr;
					    		crptr=NULL;
							}
							else
							{
								prptr = prptr->next;
								crptr=crptr->next;
							}
						}
						if(temp !=NULL)
						{
							prptr->next = temp->next;
				            cout<<"Node unlinked with key value "<<k<<endl;
						}
						else
						{
							cout<<"Node does not exixsts with key value"<<k<<endl;
						}	
					}
					 
				  }  
         }
	// 6 Update node 
			void updateNode(int k,int d)
			{
				Node* ptr = nodeExists(k);
		        if(ptr !=NULL )
				{
					ptr->data=d;
					cout<<"Data is updated successfully"<<endl;
		        }
				else
				{
					cout<<"Node Doesn't exists with key value"<<k<<endl; 
				}	
		   }
	// 7 printing
	void printlist()
	{
		if(head==NULL)
		{
			cout<<"NO Nodes in singly linked list "<<endl;
		    Node* temp=head;
		    while(temp !=NULL)
		    {
		    	cout<<"("<<temp->key<<","<<temp->data<<") -->";
		    	temp=temp->next;
			}
		}	
	}                           	
};

int main()
{

	singlyLinkedList s;
	int option;
	int key1,data1,k1;
	do
	{
		cout<<"Enter number what operation you want to perform !! Enter 0 for exit "<<endl;
		cout<<"1 for appendNode()"<<endl;
		cout<<"2 for PrependNode()"<<endl;
		cout<<"3 for  insertNode()"<<endl;
		cout<<"4 for deleteNode()"<<endl;
		cout<<"5 for  updateNode()"<<endl;
		cout<<"6 for  print()"<<endl;
		cout<<"7 for erase screen()"<<endl;
		
		cin>>option;
		Node* n1 = new Node();
		
	    switch(option)
		     {
		     	case 0:
		     		break;
		     	case 1:
		     		cout<<"Append node operation \nEnter key value and data to be append"<<endl;
		     		cin>>key1;
		     		cin>>data1;
		     		n1->key =key1;
		     		n1->data=data1;
		     		s.appendNode(n);
		     	case 2:
		     		cout<<"Prepend node operation \nEnter key value and data to be append"<<endl;
		     		cin>>key1;
		     		cin>>data1;
		     		n1->key=key1;
		     		n1->data=data1;
		     		s.prepandNode(n1);
		     	case 3:
		     		cout<<"Insert Node After operation \nEnter key of existing node after you want to insert this  node "<<endl;
		     		cin>>k1;
		     		cout<<"Enter key & data of new data"<<endl;
		     		cin>>key1;
		     		cin>>data1;
		     		n1->key = key1;
		     		n1->data = data 
		     	case 4:
		     		cout<<"Delete Node with key value "<<k<<endl;
					cin>>k1;
					s.deleteNode(k1); 
		     		
		     		break;
		     		
		     	case 5:
		     		cout<<"Enter key value for which you want to update the data"<<endl;
		     		cin>>k1;
		     		cin>>data;
		     	    s.appendNode(k1,data);
				case 6:
				    cout<<"print all the data "<<endl;
					s.printlist();
			 }
	} while(option!=0);
			 	return 0;
	

}




