#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        int pos;
        Node* next;
        
    Node()
    {
        data=0;
        pos=0;
        next=NULL;
    }
    Node(int d,int k)
    {
        data=d;
        pos=k;
    }
};
class SinglyLinkedList
{
    public:
    Node* head;
    SinglyLinkedList()
    {
        head=NULL;
    }
    SinglyLinkedList(Node* n)
    {
        head=n;
    }
    void add(Node* n)
    {
        if(head==NULL)
        {
            head=n;
            cout<<"first node is added"<<endl;
        }
        else
        {
          Node* ptr=head;
          while(ptr->next != NULL)
          {
            ptr=ptr->next;
          }
          ptr->next=n;
          cout<<"Node is added"<<endl;
        }
        return ;
    }
    void insert(int p,Node* m)
    {
        Node* cptr=head;
        Node* pptr=NULL;
        while(cptr->pos != p-1)
        {
            cptr=cptr->next;
        }
        pptr=cptr->next->next;
        cptr->next=m;
        m->next=pptr;
        return;
    }
    void print()
    {
      Node* temp=head;
      while(temp!=NULL)
      {
        cout<<temp->data;
        temp=temp->next;
      }
      return ;
    }   
};
 
 
int main()
{
  int t=0;
  int value;
  int p;
  cin>>t;
  SinglyLinkedList s;
  Node* n=new Node();
  int i=1;
  int d;
  for(int j=0;j<t;j++)
  {
    cin>>d;
    n->pos=i;
    i++;
    n->data=d;
    s.add(n);
  }
  cout<<"Enter data to be entered"<<endl;
  cin>>value;
  cout<<"Enter position "<<endl;
  cin>>p;
  n->data=value;
  s.insert(p,n);
  s.print();
  return 0; 
} 
