#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* link;
};
 Node* top=NULL;
 
 bool isEmpty()
 {
 	if(top==NULL)
 	 return true;
 	else
 	 return false;
 }
 void push(int value)
 {
 	Node* ptr=new Node();
 	ptr->data=value;
 	ptr->link=top;
 	top=ptr;
 }
 void pop()
 {
 	if(isEmpty())
 	  cout<<"Stack is Empty "<<endl;
 	else
 	{
 		Node* ptr=top;
 		top=top->link;
 		delete(ptr);
	 }	
 }
 void showTop()
 {
 	if(isEmpty())
 	  cout<<"stack is Empty"<<endl;
 	else
 	  cout<<top->data;
 }



int main()
{
 } 




