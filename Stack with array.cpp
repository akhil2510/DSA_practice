# include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int top=-1;

bool isEmpty()
  {
	if(top==-1){
		return true;
	}
	else
	  return false; 
  }
void push(int k)
{
    if(top==SIZE-1)
    {
    	cout<<"sTACK IS fULL"<<endl;
	}
	else
	{
		top++;
		A[top]=k;
	}
}
void pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		top--;
	}
}
void displayStack()
{
	if(isEmpty())
	{
				cout<<"Stack is empty"<<endl;
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			cout<<A[i]<<endl;
		}
	}
}
void showtop()
{
  if(isEmpty())
	{
				cout<<"Stack is empty"<<endl;
	} 
  else
  {
     cout<<"Top elements is "<<A[top]<<endl;	
   }	
}



int main()
{
	int i,m=0;
 
	cout<<"Enter elements 5"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>m;
		push(m);	
	}
	displayStack();
	pop();
	displayStack();
	showtop();
	return 0;
}




