#include<iostream>

using namespace std;

class Queue{
	private:
      int rear;
	  int front;
	  int arr[5];	
	public:
 	  Queue() 
	   {
	   	front =-1;
	   	rear=-1;
	   	for(int i=0;i<5;i++)
	   	{
	   	  	arr[i]=0;
		}
	   }
	   
	  bool isEmpty()
	  {
	  	if(front==-1 && rear == -1)
	  	  return true;
	  	else
	  	  return false;
	  }
	  bool isFull()
	  {
	  	if(rear == 4)
	  	 return true;
	  	else
	  	 return false;
	  }
	 void enqueue(int val)
	 {
	 	if(isFull())
	 	{
	 		cout<<"Queue is FULL"<<endl;
	 		return;
		}
		else if(isEmpty())
		{
			rear=front=0;
		}
		else
		  {
		  	rear++;
		  }
		arr[rear]=val;
	 }
	 int dequeue()
	 {
	 	int x;
	 	if(isEmpty())
	 	 return 0;
	 	else if(front == rear)
	 	{
	 		x=arr[front];
	 		front=rear=-1; 
		 }
		 else
		 {
		   x=arr[front];
		   arr[front] =0;
		   return x;
		 }
 	 }
 	 int count()
 	 {
 	 	return (rear - front +1);
	 }
	 void display()
	 {
	 	cout<<"All values in the queue are"<<endl;
	 	for(int i=0;i<5;i++)
	 	{
	 		cout<<arr[i]<<" ";
		 }
	 }
};

int main()
{
	Queue q1;
	   int option,value;
	do
	{
		cout<<"\n what operation do you want to perform"<<endl;
		cout<<"1 Enqueue()"<<endl;
		cout<<"2 dequeue()"<<endl;
		cout<<"3 isEmpty()"<<endl;
		cout<<"4 isFull()"<<endl;
		cout<<"5 count()"<<endl;
		cout<<"6 display()"<<endl;
		cout<<"7 Clear Screen"<<endl;
		
		cin>>option;
	
	switch(option)
	{
		case 0:
			break;
		case 1:
			cout<<"Enqueue operation \nEnter an item to Enqueue in the Queue "<<endl;
			cin>>value;
			q1.enqueue(value);
			break;
		case 3:
			cout<<"Dequeue operation is called \n Dequeue value"<<q1.dequeue()<<endl;
			break;
		case 4:
			if(q1.isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
			}
			else
			  cout<<"Queue is not Empty"<<endl;
			break;
		case 5:
			cout<<"Count is called \nCount of item is called"<<q1.count()<<endl;
 			break;
		case 6:
			cout<<"Display function is called "<<endl;
			q1.display();
			break;
		case 7:
		    system("cls");
			break;
		default:
			cout<<"Enter proper option number "<<endl;
			break;
	}

	}while(option !=0);
	  return 0;	
}


